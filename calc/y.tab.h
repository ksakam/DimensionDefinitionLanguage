#define DOUBLE_LITERAL 257
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define CR 262
typedef union {
    int          int_value;
    double       double_value;
} YYSTYPE;
extern YYSTYPE yylval;
