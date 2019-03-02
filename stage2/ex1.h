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


typedef struct tnode { 
	int val;	
	int type;	
	char varname;
	int nodetype;
	struct tnode *left,*right;
}tnode;

static int reg=0;

FILE *target_file;

int arr[26];

struct tnode* createTree(int val, int type, char varname, int nodetype, struct tnode *l, struct tnode *r);

int codeGen(struct tnode *t);

int getReg(void);

void freeReg(void);
