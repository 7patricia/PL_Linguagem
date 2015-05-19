%{
	#include "y.tab.h"
	void yyerror(char *);
%}

num 	[0-9]+
pal 	[a-zA-Z]+
opA 	"+"|"-"|"*"|"/"
opL		"&&"|"||"
opR		">="|"<="|"=="|"|=|"
inicio 	"INICIO"
corpo 	"CORPO"
fim		"FIM"
sep 	","|";"|"="


%%
{inicio}			{ return BEGINP; }
{corpo}				{ return MIDDLE; }
{fim}				{ return ENDP; }
{sep}				{ return SEP; }
{num}     			{ yylval.vali = atoi(yytext); return num; }
{pal}     			{ yylval.vals = strdup(yytext); return pal; }
{opA}				{ return (OPA); }
.|\n      			{ ; }

%%

int yywrap(){ 
	return(1);
}
