%{
	#include <stdio.h>
	#include <string.h>
	//#include "tp2.h"

	int yyerror(char *s);

	//ListaL vars = NULL;

	extern int yylineno;
%}

%union {
	int vali;
	char * vals;
}

%token <vali>num 
%token <vals>pal
%token BEGINP MIDDLE ENDP IF ENDIF WHILE ENDWHILE ELSE ARRAY INT WRITE READ OPM OPR OPA


%%

programa	:	BEGINP	declaracoes	MIDDLE	instrucoes	ENDP	

declaracoes	: declaracao
			| declaracoes ';' declaracao
			;

declaracao	: tipo variaveis
			;	

tipo		: INT
			| ARRAY '(' num ')'
			;

variaveis	:	variavel							
			|	variaveis ',' variavel	
			;

variavel 	:	pal 
			;

instrucoes	:	instrucao ';'	
			|	instrucoes ';' instrucao
			;

instrucao	:	atribuicao
			| 	condicao
			| 	ciclo
			|	READ '(' var ')' ';'
			|	WRITE '('txt')' ';'
			;

txt			: expressao
			| pal
			;


atribuicao 	:	var '=' expressao ';'				
			;

var 		: 	variavel 
			| 	variavel '('expressao')'
			;

cond		:	expressao
			| 	expressao OPR expressao
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




%%
int yyerror(char *s) {
	fprintf(stderr, "%d! %s\n", yylineno, s);
	return 0;
}

int main(int argc, char* argv[]){
	//vars= criaLista();
	yyparse();
	return 0;


}



	
