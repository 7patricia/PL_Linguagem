%{
	#include <stdio.h>
	#include <string.h>
	#include "arvore.c"

	Tree arvore;

	int aux;
	int proxReg=0; 
	char* varAtual;
	char* tipo;
	int tamanho=1;

	int yyerror(char *s);
	extern int yylineno;
%}

%union {
	int vali;
	char * vals;
}

%token <vali>num 
%token <vals>pal,INT, ARRAY, OPM, OPA, OPR
%token BEGINP MIDDLE ENDP IF ENDIF WHILE ENDWHILE ELSE WRITE READ


%%

programa	:	BEGINP	{arvore=initBinTree();} declaracoes	MIDDLE	instrucoes	ENDP	

declaracoes	: declaracao 
			| declaracoes  declaracao 
			;

declaracao	: tipo variaveis ';'					
			| tipo '(' num ')' variaveis ';'	{tamanho=$3;printf("tamanho: %i\n",tamanho);}
			;	

tipo		: INT 							{tipo=$1;printf("tipo: %s\n",tipo);}
			| ARRAY							{tipo=$1;printf("tipo: %s\n",tipo);}
			;

variaveis	:	variavel 					
			|	variaveis ',' variavel	
			;

variavel 	:	pal 						{varAtual=$1;printf("nome: %s\n",varAtual);aux=insertBinTree(arvore, varAtual, tipo, tamanho, proxReg);
											if(aux==-1)printf("Erro: A variável %s já foi declarada!\n",varAtual);}	
			;

instrucoes	:	instrucao ';'		
			|	instrucoes  instrucao ';'
			;

instrucao	:	atribuicao
			| 	condicao
			| 	ciclo
			|	READ '(' var ')' 
			|	WRITE '('expressao')' 
			;

atribuicao 	:	var '=' expressao 				
			;

var 		: 	pal 					{aux=existsBinTree(arvore,$1); if(aux==0)printf("Erro: A variável %s não está declarada!\n",$1);}
			| 	pal '('expressao')'
			;


expressao	: 	termo
			| 	expressao OPA termo
			;

termo		: 	fator
			| 	termo OPM fator
			;

fator		: 	var 						
			| 	num
			|	'(' cond ')'
			;

condicao	: 	IF '('cond')' instrucoes  ENDIF 
			| 	IF '('cond')' instrucoes  ELSE instrucoes ENDIF	
			;

ciclo 		:	WHILE '('cond')' instrucoes ENDWHILE
			;


cond		:	expressao
			| 	expressao OPR expressao
			;


%%
int yyerror(char *s) {
	fprintf(stderr, "%d! %s\n", yylineno, s);
	return 0;
}

int main(int argc, char* argv[]){
	
	
	
	
	yyparse();
	return 0;


}



	
