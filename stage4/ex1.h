#define _ID_ 0
#define _NUM_ 1
#define _ASSIGN_ 2
#define _PLUS_ 3
#define _MINUS_ 4
#define _MUL_ 5
#define _DIV_ 6
#define _MOD_ 7
#define _BODY_ 8
#define _WRITE_ 9
#define _READ_ 10
#define _EQ_ 11
#define _NE_ 12
#define _LT_ 13
#define _GT_ 14
#define _LE_ 15
#define _GE_ 16
#define _IF_THEN_ELSE_ 17
#define _IF_THEN_ 18
#define _WHILE_ 19
#define _BREAK_ 20
#define _CONTINUE_ 21
#define _REPEAT_UNTIL_ 22
#define _DO_WHILE_ 23
#define _STR_ 24
#define _ARRAY_ 25
#define _ASSIGN_ARRAY_ 26
#define _READ_ARRAY_ 27
#define _MATRIX_ 28
#define _ASSIGN_MATRIX_ 29
#define _READ_MATRIX_ 30
#define _PTR_ 31
#define _ASSIGN_PTR_ 32
#define _ASSIGN_PTR_ADDR_ 33
#define _READ_PTR_ 34
#define _ADDR_ 35

#define booltype 100
#define inttype 101
#define stringtype 102

#define _BRKP_ 200

typedef struct tnode {
	int val;
	int type;
	char *varname;
	int nodetype;
	struct Gsymbol *Gentry;
	struct tnode *left,*mid,*right;
}tnode;

typedef struct Gsymbol{
	char *name;
	int type;
	int size1;
	int size2;
	int nodetype;
	int binding;
	struct Gsymbol *next;
}Gsymbol;

struct Gsymbol *Ghead,*Gtail;

typedef struct constant {
    int val1;
    char *val2;
}constant;

typedef struct loopLabel {
	int br;
	int cn;
	struct loopLabel *next;
}loopLabel;

struct loopLabel *loopHead;

static int reg=0,label=0,bind=4096;

FILE *target_file;

int arr[26];

struct tnode* createTree(int val, int type, char *varname, int nodetype, struct tnode *l, struct tnode *m, struct tnode *r);

int codeGen(struct tnode *t);

int getReg(void);

void freeReg(void);

int getLabel(void);

void typechecker(struct tnode *t);

int yyerror(char const *s);

void xsmterminate(void);

void addLabel(int l1,int l2);

void delLabel(void);

struct Gsymbol *Lookup(char * name);

void Install(char *name, int type, int size1, int size2,int nodetype);

void inorderprint(struct tnode *t);

void nodetypeprint(struct tnode *t);

char *printtype(int type);

 char *printvartype(int nodetype);

 void vartypechecker(struct tnode *t);
