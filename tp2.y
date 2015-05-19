%{
	#include <stdio.h>
	#include <string.h>

	int yyerror(char *s);

	extern int yylineno;
%}

%union {
	int vali;
	char *vals;
}

%token <vali>num 
%token <vals>pal
%token OPA
%token BEGINP MIDDLE ENDP SEP 

%%

programa	:	BEGINP	declaracoes	MIDDLE	instrucoes	ENDP

declaracoes	:	variavel
			|	variavel SEP declaracoes
			;

variavel 	:	pal 
			;

instrucoes	:	instrucao SEP	
			|	instrucao SEP instrucoes 
			;

instrucao	:	atribuicao
			;

atribuicao 	:	variavel SEP expressao 
			;

expressao 	:	valor 
			|	valor OPA expressao
			;

valor		:	num { { printf("%d\n", $1); } }
			|	pal { { printf("%s\n", $1); } }
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



	
