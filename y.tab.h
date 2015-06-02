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
extern YYSTYPE yylval;
