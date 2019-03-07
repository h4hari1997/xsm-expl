#define _ID_ 0
#define _NUM_ 1
#define _ASSIGN_ 2
#define _PLUS_ 3
#define _MINUS_ 4
#define _MUL_ 5
#define _DIV_ 6
#define _BODY_ 7
#define _WRITE_ 8
#define _READ_ 9
#define _EQ_ 10
#define _NE_ 11
#define _LT_ 12
#define _GT_ 13
#define _LE_ 14
#define _GE_ 15
#define _IF_THEN_ELSE_ 16
#define _IF_THEN_ 17
#define _WHILE_ 18
#define _BREAK_ 19
#define _CONTINUE_ 20
#define _REPEAT_UNTIL_ 21
#define _DO_WHILE_ 22


#define inttype 1
#define booltype 0

typedef struct tnode { 
	int val;	
	int type;	
	char varname;
	int nodetype;
	struct tnode *left,*mid,*right;
}tnode;

typedef struct loopLabel { 
	int br;	
	int cn;	
	struct loopLabel *next;
}loopLabel;

struct loopLabel *loopHead;

static int reg=0,label=0;

FILE *target_file;

int arr[26];

struct tnode* createTree(int val, int type, char varname, int nodetype, struct tnode *l, struct tnode *m, struct tnode *r);

int codeGen(struct tnode *t);

int getReg(void);

void freeReg(void);

int getLabel(void);

void typechecker(struct tnode *t);

int yyerror(char const *s);

void xsmterminate(void);

void addLabel(int l1,int l2);

void delLabel(void);
