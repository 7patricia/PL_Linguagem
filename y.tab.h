#define num 257
#define pal 258
#define BEGINP 259
#define MIDDLE 260
#define ENDP 261
#define IF 262
#define ENDIF 263
#define WHILE 264
#define ENDWHILE 265
#define ELSE 266
#define ARRAY 267
#define INT 268
#define WRITE 269
#define READ 270
#define OPM 271
#define OPR 272
#define OPA 273
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
