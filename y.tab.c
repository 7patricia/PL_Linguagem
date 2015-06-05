#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "tp2.y"
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



	/*int yyerror(char *s);*/
	/*extern int yylineno;*/
#line 29 "tp2.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int vali;
	char * vals;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 57 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define num 257
#define pal 258
#define OPM 259
#define OPA 260
#define OPR 261
#define BEGINP 262
#define MIDDLE 263
#define ENDP 264
#define IF 265
#define ENDIF 266
#define WHILE 267
#define ENDWHILE 268
#define ELSE 269
#define WRITE 270
#define READ 271
#define INT 272
#define ARRAY 273
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    2,    0,    1,    1,    7,    4,    8,    4,    5,    5,
    6,    6,    9,    3,    3,   10,   10,   10,   10,   14,
   10,   10,   11,   16,   11,   17,   17,   15,   15,   18,
   18,   19,   20,   19,   19,   19,   21,   12,   22,   23,
   22,   24,   25,   13,
};
static const short yylen[] = {                            2,
    0,    6,    1,    2,    0,    4,    0,    7,    1,    1,
    1,    3,    1,    2,    3,    1,    1,    1,    4,    0,
    8,    4,    3,    0,    7,    1,    3,    1,    3,    1,
    3,    1,    0,    5,    1,    3,    0,    7,    1,    0,
    4,    0,    0,    8,
};
static const short yydefred[] = {                         0,
    0,    0,    9,   10,    0,    3,    0,    0,    4,    0,
    0,    0,    0,   13,    0,   11,    0,    0,   42,    0,
    0,    0,    0,   16,   17,   18,    7,    6,    0,    0,
    0,    0,    0,    0,    0,    2,    0,   14,    0,   12,
   35,    0,    0,    0,    0,   30,    0,    0,    0,    0,
    0,    0,   15,    0,    0,    0,    0,    0,    0,    0,
   37,    0,   22,   19,    0,    8,    0,   36,    0,   31,
    0,    0,    0,   43,    0,    0,    0,    0,    0,    0,
   34,    0,   39,   40,   38,    0,    0,    0,   44,   21,
    0,   41,
};
static const short yydgoto[] = {                          2,
    5,    8,   22,    6,    7,   15,   11,   39,   16,   23,
   24,   25,   26,   65,   48,   31,   49,   45,   46,   55,
   73,   85,   88,   33,   79,
};
static const short yysindex[] = {                      -258,
 -229,    0,    0,    0, -229,    0,  -15, -257,    0, -243,
 -238, -179,  -13,    0,  -29,    0,  -39,   -8,    0,   -3,
   11, -217,   -7,    0,    0,    0,    0,    0, -238,  -27,
   16,  -27,   20,  -27, -197,    0,    4,    0, -238,    0,
    0,    0,  -27, -190, -187,    0,  -27, -215,   32,  -27,
  -34,   33,    0,  -26,   35,   39,  -27,  -27,  -33,  -27,
    0,   42,    0,    0,   44,    0,  -27,    0, -187,    0,
   24, -190, -179,    0,  -27,  -32,  -27, -231, -179,  -31,
    0, -190,    0,    0,    0, -203,   46, -179,    0,    0,
 -189,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0, -174,    0, -168,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   53,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -40,    0,   36,  -38,    0,    0,   55,    0,    0,
    0,   54,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -36,    0,
    0,  -13,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   38,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,  -62,   93,    0,   60,    0,    0,   71,  -20,
    0,    0,    0,    0,  -18,    0,  -19,   45,   43,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 231
static const short yytable[] = {                         33,
   32,   37,   28,    1,   29,   12,   63,   71,   81,   87,
   78,   44,   43,   13,   29,   51,   86,   29,   32,   14,
   28,   30,   29,   56,   10,   91,   17,   27,   59,   28,
   62,   32,   66,   18,   83,   19,   34,   84,   20,   21,
   17,   72,    3,    4,   57,   60,   36,   18,   76,   19,
   35,   38,   20,   21,   17,   47,   80,   37,   82,   50,
   52,   18,   53,   19,   89,   37,   20,   21,   17,   57,
   37,   58,   61,   64,   67,   18,   92,   19,   17,   68,
   20,   21,   74,   75,   77,   18,   90,   19,    1,    5,
   20,   21,   24,   20,   23,   26,   25,    9,   54,   40,
   70,   69,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   32,   32,
   32,   28,   28,   29,   29,   57,   57,   57,   57,   41,
   42,
};
static const short yycheck[] = {                         40,
   41,   22,   41,  262,   41,  263,   41,   41,   41,   41,
   73,   30,   40,  257,   44,   34,   79,   44,   59,  258,
   59,   61,   59,   43,   40,   88,  258,   41,   47,   59,
   50,   40,   59,  265,  266,  267,   40,  269,  270,  271,
  258,   60,  272,  273,  260,  261,  264,  265,   67,  267,
   40,   59,  270,  271,  258,   40,   75,   78,   77,   40,
  258,  265,   59,  267,  268,   86,  270,  271,  258,  260,
   91,  259,   41,   41,   40,  265,  266,  267,  258,   41,
  270,  271,   41,   40,   61,  265,   41,  267,  263,  258,
  270,  271,   40,   40,   59,   41,   59,    5,   39,   29,
   58,   57,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  259,  260,
  261,  260,  261,  260,  261,  260,  260,  260,  260,  257,
  258,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"num","pal",
"OPM","OPA","OPR","BEGINP","MIDDLE","ENDP","IF","ENDIF","WHILE","ENDWHILE",
"ELSE","WRITE","READ","INT","ARRAY","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : programa",
"$$1 :",
"programa : BEGINP declaracoes $$1 MIDDLE instrucoes ENDP",
"declaracoes : declaracao",
"declaracoes : declaracoes declaracao",
"$$2 :",
"declaracao : tipo $$2 variaveis ';'",
"$$3 :",
"declaracao : tipo '(' num ')' $$3 variaveis ';'",
"tipo : INT",
"tipo : ARRAY",
"variaveis : variavel",
"variaveis : variaveis ',' variavel",
"variavel : pal",
"instrucoes : instrucao ';'",
"instrucoes : instrucoes instrucao ';'",
"instrucao : atribuicao",
"instrucao : condicao",
"instrucao : ciclo",
"instrucao : READ '(' pal ')'",
"$$4 :",
"instrucao : READ '(' pal $$4 '(' expressao ')' ')'",
"instrucao : WRITE '(' expressao ')'",
"atribuicao : pal '=' expressao",
"$$5 :",
"atribuicao : pal $$5 '(' expressao ')' '=' expressao",
"cond : expressao",
"cond : expressao OPR expressao",
"expressao : termo",
"expressao : expressao OPA termo",
"termo : fator",
"termo : termo OPM fator",
"fator : pal",
"$$6 :",
"fator : pal $$6 '(' expressao ')'",
"fator : num",
"fator : '(' cond ')'",
"$$7 :",
"condicao : IF '(' cond ')' $$7 instrucoes senao",
"senao : ENDIF",
"$$8 :",
"senao : ELSE $$8 instrucoes ENDIF",
"$$9 :",
"$$10 :",
"ciclo : WHILE $$9 '(' cond ')' $$10 instrucoes ENDWHILE",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 128 "tp2.y"
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



	
#line 345 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 44 "tp2.y"
	{ fprintf(file,"START\n"); }
break;
case 2:
#line 44 "tp2.y"
	{fprintf(file,"STOP\n");f=fclose(file);}
break;
case 5:
#line 50 "tp2.y"
	{tamanho=1;}
break;
case 7:
#line 51 "tp2.y"
	{tamanho=yystack.l_mark[-1].vali;}
break;
case 9:
#line 54 "tp2.y"
	{tip=inteiro;}
break;
case 10:
#line 55 "tp2.y"
	{tip=vetor;}
break;
case 11:
#line 58 "tp2.y"
	{ ; }
break;
case 12:
#line 59 "tp2.y"
	{ ; }
break;
case 13:
#line 62 "tp2.y"
	{ varAtual=yystack.l_mark[0].vals; aux=insertBinTree(arvore, varAtual, tip, tamanho, proxReg);  
											if (aux==-1) { yyerror("A variável já foi declarada!"); exit(0);} else { fprintf(file,"PUSHN %d\n",tamanho); proxReg=proxReg+tamanho;} }
break;
case 14:
#line 66 "tp2.y"
	{ ; }
break;
case 15:
#line 67 "tp2.y"
	{ ; }
break;
case 16:
#line 70 "tp2.y"
	{ ; }
break;
case 17:
#line 71 "tp2.y"
	{ ; }
break;
case 18:
#line 72 "tp2.y"
	{ ; }
break;
case 19:
#line 73 "tp2.y"
	{ aux=existsBinTree(arvore,yystack.l_mark[-1].vals); if(aux==0) { yyerror("A variável não foi declarada!"); exit(0); } else { registo=registoVar(arvore,yystack.l_mark[-1].vals); fprintf(file,"READ\nATOI\nSTOREG %d\n",registo);} }
break;
case 20:
#line 74 "tp2.y"
	{ aux=existsBinTree(arvore,yystack.l_mark[0].vals); if(aux==0) { yyerror("A variável não foi declarada!"); exit(0); } else { tip=tipoVar(arvore,yystack.l_mark[0].vals); if(tip!=vetor) { yyerror("A variável não é um array!"); exit(0);} else { registo=registoVar(arvore,yystack.l_mark[0].vals); fprintf(file,"PUSHGP\nPUSHI %d\nPADD\n",registo);} } }
break;
case 21:
#line 75 "tp2.y"
	{ fprintf(file,"READ\nATOI\nSTOREN\n"); }
break;
case 22:
#line 76 "tp2.y"
	{ fprintf(file,"WRITEI\n"); }
break;
case 23:
#line 79 "tp2.y"
	{ aux=existsBinTree(arvore,yystack.l_mark[-2].vals); if(aux==0) {yyerror("A variável não foi declarada!"); exit(0); } else { registo=registoVar(arvore,yystack.l_mark[-2].vals); fprintf(file,"STOREG %d\n",registo); } }
break;
case 24:
#line 80 "tp2.y"
	{ aux=existsBinTree(arvore,yystack.l_mark[0].vals); if(aux==0) {yyerror("A variável não foi declarada!"); exit(0); } else {  tip=tipoVar(arvore,yystack.l_mark[0].vals); if(tip!=vetor) { yyerror("A variável não é um array!"); exit(0);} else { registo=registoVar(arvore,yystack.l_mark[0].vals); fprintf(file,"PUSHGP\nPUSHI %d\nPADD\n",registo); } } }
break;
case 25:
#line 81 "tp2.y"
	{ fprintf(file,"STOREN\n"); }
break;
case 26:
#line 85 "tp2.y"
	{ ; }
break;
case 27:
#line 86 "tp2.y"
	{ if( strcmp(yystack.l_mark[-1].vals,">>")==0 ) { fprintf(file,"SUP\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"<<")==0 ) { fprintf(file,"INF\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"==")==0 ) { fprintf(file,"EQUAL\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,">=")==0 ) { fprintf(file,"SUPEQ\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"<=")==0 ) { fprintf(file,"INFEQ\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"|=|")==0 ) { fprintf(file,"EQUAL\nNOT\n"); } }
break;
case 28:
#line 94 "tp2.y"
	{ ; }
break;
case 29:
#line 95 "tp2.y"
	{ if( strcmp(yystack.l_mark[-1].vals,"+")==0 ) { fprintf(file,"ADD\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"-")==0 ) { fprintf(file,"SUB\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"||")==0 ) { fprintf(file,"ADD\n"); } }
break;
case 30:
#line 100 "tp2.y"
	{ ; }
break;
case 31:
#line 101 "tp2.y"
	{ if( strcmp(yystack.l_mark[-1].vals,"*")==0 ) { fprintf(file,"MUL\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"/")==0 ) { fprintf(file,"DIV\n"); }
										  	if( strcmp(yystack.l_mark[-1].vals,"&&")==0 ) { fprintf(file,"MUL\n"); } }
break;
case 32:
#line 106 "tp2.y"
	{ aux=existsBinTree(arvore,yystack.l_mark[0].vals); if(aux==0) {yyerror("A variável não foi declarada!"); exit(0); } else { registo=registoVar(arvore,yystack.l_mark[0].vals); fprintf(file,"LOADG %d\n",registo);}}
break;
case 33:
#line 107 "tp2.y"
	{ aux=existsBinTree(arvore,yystack.l_mark[0].vals); if(aux==0) { yyerror("A variável não foi declarada!"); exit(0); } else { tip=tipoVar(arvore,yystack.l_mark[0].vals); if(tip!=vetor) { yyerror("A variável não é um array!"); exit(0);} else { registo=registoVar(arvore,yystack.l_mark[0].vals); fprintf(file,"PUSHGP\nPUSHI %d\nPADD\n",registo);} } }
break;
case 34:
#line 108 "tp2.y"
	{ fprintf(file,"LOADN\n");}
break;
case 35:
#line 109 "tp2.y"
	{ fprintf(file,"PUSHI %d\n",yystack.l_mark[0].vali); }
break;
case 37:
#line 113 "tp2.y"
	{ fprintf(file,"JZ lab%d\n",cont);}
break;
case 39:
#line 116 "tp2.y"
	{ fprintf(file,"lab%d: NOP\n",cont++); }
break;
case 40:
#line 117 "tp2.y"
	{ fprintf(file,"JUMP fse%d\nlab%d: NOP\n",cont,cont); }
break;
case 41:
#line 117 "tp2.y"
	{ fprintf(file,"fse%d: NOP\n",cont++); }
break;
case 42:
#line 120 "tp2.y"
	{ fprintf(file,"labinicio%d: NOP\n",cont);}
break;
case 43:
#line 120 "tp2.y"
	{ fprintf(file,"JZ fwhile%d\n",cont);}
break;
case 44:
#line 120 "tp2.y"
	{ fprintf(file,"JUMP labinicio%d\nfwhile%d: NOP\n",cont,cont++);}
break;
#line 709 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
