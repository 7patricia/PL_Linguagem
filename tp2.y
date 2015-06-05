%{
	#include <stdio.h>
	#include <string.h>
	#include "arvore.c"


	Tree arvore;

	#define inteiro 1
	#define vetor	2


	FILE *file;
	int cont=0;
	int f;
	int aux;
	int proxReg=0; 
	int registo;
	char* varAtual;
	int tip;
	int tamanho=1;



	//int yyerror(char *s);
	//extern int yylineno;
%}

%union {
	int vali;
	char * vals;
}



%token <vali>num 
%token <vals>pal OPM OPA OPR
%token BEGINP MIDDLE ENDP IF ENDIF WHILE ENDWHILE ELSE WRITE READ INT ARRAY



%%

programa	:	BEGINP declaracoes{ fprintf(file,"START\n"); } MIDDLE	instrucoes	ENDP{fprintf(file,"STOP\n");f=fclose(file);}	

declaracoes	: declaracao 
			| declaracoes  declaracao 
			;

declaracao	: tipo {tamanho=1;} variaveis ';'					
			| tipo '(' num ')' {tamanho=$3;} variaveis ';'	
			;	

tipo		: INT 							{tip=inteiro;}
			| ARRAY							{tip=vetor;}
			;

variaveis	:	variavel 					{ ; }
			|	variaveis ',' variavel		{ ; }
			;

variavel 	:	pal 						{ varAtual=$1; aux=insertBinTree(arvore, varAtual, tip, tamanho, proxReg);  
											if (aux==-1) { yyerror("A variável já foi declarada!"); exit(0);} else { fprintf(file,"PUSHN %d\n",tamanho); proxReg=proxReg+tamanho;} }	
			;

instrucoes	:	instrucao ';'				{ ; }
			|	instrucoes  instrucao ';'	{ ; }
			;

instrucao	:	atribuicao					{ ; }
			| 	condicao					{ ; }
			| 	ciclo						{ ; }
			|	READ '(' pal ')' 			{ aux=existsBinTree(arvore,$3); if(aux==0) { yyerror("A variável não foi declarada!"); exit(0); } else { registo=registoVar(arvore,$3); fprintf(file,"READ\nATOI\nSTOREG %d\n",registo);} }
			| 	READ  '(' pal 				{ aux=existsBinTree(arvore,$3); if(aux==0) { yyerror("A variável não foi declarada!"); exit(0); } else { tip=tipoVar(arvore,$3); if(tip!=vetor) { yyerror("A variável não é um array!"); exit(0);} else { registo=registoVar(arvore,$3); fprintf(file,"PUSHGP\nPUSHI %d\nPADD\n",registo);} } } 
				      '('expressao')' ')'	{ fprintf(file,"READ\nATOI\nSTOREN\n"); }				
			|	WRITE '('expressao')' 		{ fprintf(file,"WRITEI\n"); } 
			;

atribuicao 	:	pal '=' expressao 			{ aux=existsBinTree(arvore,$1); if(aux==0) {yyerror("A variável não foi declarada!"); exit(0); } else { registo=registoVar(arvore,$1); fprintf(file,"STOREG %d\n",registo); } }
			|	pal 						{ aux=existsBinTree(arvore,$1); if(aux==0) {yyerror("A variável não foi declarada!"); exit(0); } else {  tip=tipoVar(arvore,$1); if(tip!=vetor) { yyerror("A variável não é um array!"); exit(0);} else { registo=registoVar(arvore,$1); fprintf(file,"PUSHGP\nPUSHI %d\nPADD\n",registo); } } }
			'('expressao')'	'=' expressao 	{ fprintf(file,"STOREN\n"); }	
			;


cond		:	expressao					{ ; }
			| 	expressao OPR expressao 	{ if( strcmp($2,">>")==0 ) { fprintf(file,"SUP\n"); }
										  	if( strcmp($2,"<<")==0 ) { fprintf(file,"INF\n"); }
										  	if( strcmp($2,"==")==0 ) { fprintf(file,"EQUAL\n"); }
										  	if( strcmp($2,">=")==0 ) { fprintf(file,"SUPEQ\n"); }
										  	if( strcmp($2,"<=")==0 ) { fprintf(file,"INFEQ\n"); }
										  	if( strcmp($2,"|=|")==0 ) { fprintf(file,"EQUAL\nNOT\n"); } }
			;

expressao	: 	termo						{ ; }
			| 	expressao OPA termo			{ if( strcmp($2,"+")==0 ) { fprintf(file,"ADD\n"); }
										  	if( strcmp($2,"-")==0 ) { fprintf(file,"SUB\n"); }
										  	if( strcmp($2,"||")==0 ) { fprintf(file,"ADD\n"); } }
			;

termo		: 	fator						{ ; }
			| 	termo OPM fator				{ if( strcmp($2,"*")==0 ) { fprintf(file,"MUL\n"); }
										  	if( strcmp($2,"/")==0 ) { fprintf(file,"DIV\n"); }
										  	if( strcmp($2,"&&")==0 ) { fprintf(file,"MUL\n"); } }
			;

fator		: 	pal							{ aux=existsBinTree(arvore,$1); if(aux==0) {yyerror("A variável não foi declarada!"); exit(0); } else { registo=registoVar(arvore,$1); fprintf(file,"LOADG %d\n",registo);}}						
			| 	pal  						{ aux=existsBinTree(arvore,$1); if(aux==0) { yyerror("A variável não foi declarada!"); exit(0); } else { tip=tipoVar(arvore,$1); if(tip!=vetor) { yyerror("A variável não é um array!"); exit(0);} else { registo=registoVar(arvore,$1); fprintf(file,"PUSHGP\nPUSHI %d\nPADD\n",registo);} } }
				'('expressao')'				{ fprintf(file,"LOADN\n");}
			| 	num							{ fprintf(file,"PUSHI %d\n",$1); }
			|	'(' cond ')'				
			;

condicao	: 	IF '('cond')' { fprintf(file,"JZ lab%d\n",cont);}  instrucoes   senao  	
			;

senao		:	ENDIF { fprintf(file,"lab%d: NOP\n",cont++); }
			| 	ELSE { fprintf(file,"JUMP fse%d\nlab%d: NOP\n",cont,cont); }  instrucoes  ENDIF { fprintf(file,"fse%d: NOP\n",cont++); }
			;

ciclo 		:	WHILE { fprintf(file,"labinicio%d: NOP\n",cont);}'('cond')' { fprintf(file,"JZ fwhile%d\n",cont);} instrucoes ENDWHILE { fprintf(file,"JUMP labinicio%d\nfwhile%d: NOP\n",cont,cont++);}
			;





%%
#include "lex.yy.c"

int yyerror(char *s) {
	fprintf(stderr, "Erro na linha ( %d! ) %s\n", yylineno, s);
	return 0;
}

int main(int argc, char* argv[]){

	arvore=initBinTree();
	file=fopen("assembly.txt","w+");

		yyparse();

	return 0;


}



	
