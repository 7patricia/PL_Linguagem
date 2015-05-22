%{
	#include "y.tab.h"
	void yyerror(char *);
%}

num 		[0-9]+
pal 		[a-zA-Z]+
espacos 	[ \t]
opA 		"+"|"-"|"&&"     
opM			"||"|"*"|"/"
opR			">>"|"<<"|">="|"<="|"=="|"|=|"
inicio 		"BEGIN"
corpo 		"BODY"
fim			"END" 
condicao 	"IF"
ifelse		"ELSE" 
fimCond		"ENDIF"
ciclo		"WHILE"
fimciclo	"ENDWHILE"
inteiro		"INT"
vetor		"ARRAY"
read		"READ"
write		"WRITE"

%%
{inicio}			{ return BEGINP; }
{corpo}				{ return MIDDLE; }
{fim}				{ return ENDP; }
{condicao}			{ return IF; }
{ifelse}			{ return ELSE; }
{fimCond}			{ return ENDIF; }
{ciclo}				{ return WHILE; }
{fimciclo}			{ return ENDWHILE; }
{opA}				{ return (OPA); }
{opR}				{ return (OPR); }
{vetor}				{ return (ARRAY);}
{inteiro}			{ return (INT);}
{read}				{ return (READ);}
{write}				{ return (WRITE);}
{num}     			{ yylval.vali = atoi(yytext); return num; }
{pal}     			{ yylval.vals = strdup(yytext); return pal; }

.|\n      			{ ; }



%%

int yywrap(){ 
	return(1);
}
