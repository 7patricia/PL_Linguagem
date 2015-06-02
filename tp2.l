%{
	#include "y.tab.h"
	void yyerror(char *);
%}

num 		[0-9]+
pal 		[a-zA-Z]+
espacos 	[ \t]
opA 		"+"|"-"|"||"     
opM			"&&"|"*"|"/"
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
[,;()=]              { return yytext[0]; }
{inicio}			{ return BEGINP; }
{corpo}				{ return MIDDLE; }
{fim}				{ return ENDP; }
{condicao}			{ return IF; } 
{ifelse}			{ return ELSE; }
{fimCond}			{ return ENDIF; }
{ciclo}				{ return WHILE; }
{fimciclo}			{ return ENDWHILE; }
{opA}				{ yylval.vals = strdup(yytext);return (OPA); }
{opR}				{ yylval.vals = strdup(yytext);return (OPR); }
{opM}				{ yylval.vals = strdup(yytext);return (OPM);}
{vetor}				{ yylval.vals = strdup(yytext);return (ARRAY);}
{inteiro}			{ yylval.vals = strdup(yytext);return (INT);}
{read}				{ return (READ);}
{write}				{ return (WRITE);}
{num}     			{ yylval.vali = atoi(yytext); return num; }
{pal}     			{ yylval.vals = strdup(yytext); return pal; }

.|\n      			{ ; }



%%

int yywrap(){ 
	return(1);
}
