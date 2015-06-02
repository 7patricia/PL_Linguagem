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

	int aux;
	int proxReg=0; 
	char* varAtual;
	char* tipo;
	int tamanho=1;

	int yyerror(char *s);
	extern int yylineno;
#line 18 "tp2.y"
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
#line 46 "y.tab.c"

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
#define INT 259
#define ARRAY 260
#define OPM 261
#define OPA 262
#define OPR 263
#define BEGINP 264
#define MIDDLE 265
#define ENDP 266
#define IF 267
#define ENDIF 268
#define WHILE 269
#define ENDWHILE 270
#define ELSE 271
#define WRITE 272
#define READ 273
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    2,    0,    1,    1,    4,    4,    5,    5,    6,    6,
    7,    3,    3,    8,    8,    8,    8,    8,    9,   12,
   12,   13,   13,   14,   14,   15,   15,   15,   10,   10,
   11,   16,   16,
};
static const short yylen[] = {                            2,
    0,    6,    1,    2,    3,    6,    1,    1,    1,    3,
    1,    2,    3,    1,    1,    1,    4,    4,    3,    1,
    4,    1,    3,    1,    3,    1,    1,    3,    6,    8,
    6,    1,    3,
};
static const short yydefred[] = {                         0,
    1,    0,    0,    7,    8,    0,    3,    0,    0,    4,
   11,    0,    0,    9,    0,    0,    0,    0,    0,    0,
    0,   14,   15,   16,    0,    0,    5,    0,    0,    0,
    0,    0,    0,    2,    0,   12,    0,    0,   10,   27,
    0,   26,    0,    0,   24,    0,    0,    0,    0,    0,
   13,    0,    0,    0,    0,   21,    0,    0,    0,    0,
   18,   17,    6,   28,    0,   25,    0,    0,    0,   29,
    0,   31,    0,   30,
};
static const short yydgoto[] = {                          2,
    6,    3,   20,    7,    8,   13,   14,   21,   22,   23,
   24,   42,   46,   44,   45,   47,
};
static const short yysindex[] = {                      -254,
    0,    0, -215,    0,    0, -178,    0,  -27, -181,    0,
    0, -240,  -25,    0,  -16,   -7,   -4,    2,   11, -226,
   -6,    0,    0,    0,   -9,   18,    0, -198,  -28,  -28,
  -28,  -28, -196,    0,   12,    0,  -28, -198,    0,    0,
  -28,    0,  -39, -183,    0, -214,   42,   43,  -34,   44,
    0, -173,  -22,   49,  -28,    0,  -28,  -28, -181, -181,
    0,    0,    0,    0, -183,    0, -173, -242, -200,    0,
 -181,    0, -193,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -41,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -38,    0,   52,    0,    0,    0,    0,
    0,   35,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -36,    0,   54,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,  -21,   90,    0,   59,   70,  -12,    0,    0,
    0,   -5,  -23,   45,   46,  -30,
};
#define YYTABLESIZE 231
static const short yytable[] = {                         20,
   48,   56,   22,   25,   23,   43,   61,   35,   49,    1,
   54,   41,   12,   52,   25,   15,   26,   20,   28,   20,
   22,   28,   23,   29,   16,   70,   17,   50,   71,   18,
   19,   15,   30,   27,   67,   31,   63,   68,   69,   34,
   16,   32,   17,    4,    5,   18,   19,   55,   58,   73,
   33,   37,   36,   25,   25,   35,   35,   15,   38,   11,
   35,   15,   25,   25,   15,   25,   16,   25,   17,   72,
   51,   18,   19,   16,   74,   17,   15,   57,   18,   19,
    4,    5,   59,   60,   62,   16,    9,   17,   55,   64,
   18,   19,   32,   19,   33,   10,   53,   39,    0,   65,
    0,    0,   66,    0,    0,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,   20,
   20,   20,   55,   22,   22,   23,   23,   55,   40,   15,
   11,
};
static const short yycheck[] = {                         41,
   31,   41,   41,    9,   41,   29,   41,   20,   32,  264,
   41,   40,   40,   37,   20,  258,  257,   59,   44,   61,
   59,   44,   59,   40,  267,  268,  269,   33,  271,  272,
  273,  258,   40,   59,   58,   40,   59,   59,   60,  266,
  267,   40,  269,  259,  260,  272,  273,  262,  263,   71,
   40,   61,   59,   59,   60,   68,   69,  258,   41,  258,
   73,  258,   68,   69,  258,   71,  267,   73,  269,  270,
   59,  272,  273,  267,  268,  269,  258,  261,  272,  273,
  259,  260,   41,   41,   41,  267,  265,  269,  262,   41,
  272,  273,   41,   59,   41,    6,   38,   28,   -1,   55,
   -1,   -1,   57,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  261,
  262,  263,  262,  262,  263,  262,  263,  262,  257,  258,
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
"INT","ARRAY","OPM","OPA","OPR","BEGINP","MIDDLE","ENDP","IF","ENDIF","WHILE",
"ENDWHILE","ELSE","WRITE","READ","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : programa",
"$$1 :",
"programa : BEGINP $$1 declaracoes MIDDLE instrucoes ENDP",
"declaracoes : declaracao",
"declaracoes : declaracoes declaracao",
"declaracao : tipo variaveis ';'",
"declaracao : tipo '(' num ')' variaveis ';'",
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
"instrucao : READ '(' var ')'",
"instrucao : WRITE '(' expressao ')'",
"atribuicao : var '=' expressao",
"var : pal",
"var : pal '(' expressao ')'",
"expressao : termo",
"expressao : expressao OPA termo",
"termo : fator",
"termo : termo OPM fator",
"fator : var",
"fator : num",
"fator : '(' cond ')'",
"condicao : IF '(' cond ')' instrucoes ENDIF",
"condicao : IF '(' cond ')' instrucoes ELSE instrucoes ENDIF",
"ciclo : WHILE '(' cond ')' instrucoes ENDWHILE",
"cond : expressao",
"cond : expressao OPR expressao",

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
#line 98 "tp2.y"
int yyerror(char *s) {
	fprintf(stderr, "%d! %s\n", yylineno, s);
	return 0;
}

int main(int argc, char* argv[]){
	
	
	
	
	yyparse();
	return 0;


}



	
#line 310 "y.tab.c"

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
#line 30 "tp2.y"
	{arvore=initBinTree();}
break;
case 6:
#line 37 "tp2.y"
	{tamanho=yystack.l_mark[-3].vali;printf("tamanho: %i\n",tamanho);}
break;
case 7:
#line 40 "tp2.y"
	{tipo=yystack.l_mark[0].vals;printf("tipo: %s\n",tipo);}
break;
case 8:
#line 41 "tp2.y"
	{tipo=yystack.l_mark[0].vals;printf("tipo: %s\n",tipo);}
break;
case 11:
#line 48 "tp2.y"
	{varAtual=yystack.l_mark[0].vals;printf("nome: %s\n",varAtual);aux=insertBinTree(arvore, varAtual, tipo, tamanho, proxReg);proxReg++;
											if(aux==-1)printf("Erro: A variável %s já foi declarada!\n",varAtual);}
break;
case 20:
#line 66 "tp2.y"
	{aux=existsBinTree(arvore,yystack.l_mark[0].vals); if(aux==0)printf("Erro: A variável %s não está declarada!\n",yystack.l_mark[0].vals);}
break;
#line 537 "y.tab.c"
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
