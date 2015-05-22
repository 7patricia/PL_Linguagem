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
	char *vals;
}

%token <vali>num 
%token <vals>pal
%token OPA
%token OPR
%token OPM
%token BEGINP MIDDLE ENDP IF ENDIF WHILE ENDWHILE ELSE IMPRIMIR LER

%type<vali> valor expressao

%%

programa	:	BEGINP	declaracoes	MIDDLE	instrucoes	ENDP	

variaveis	:	variavel							{	 }
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
			|	LER '(' var ')' ';'
			|	IMPRIMIR '('txt')' ';'
			;

txt			: pal
			| expressao
			;


atribuicao 	:	var '=' expressao ';'				{ ; }
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

condicao	: 	IF comp instrucoes  ENDIF 
			| 	IF comp instrucoes  ELSE instrucoes '!''!'	
			;

ciclo 		:	WHILE comp instrucoes ENDWHILE
			;

comp		:	'(' fator OPR fator ')'
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



	
