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
#define _AND_ 17
#define _OR_ 18
#define _NOT_ 19
#define _IF_THEN_ELSE_ 20
#define _IF_THEN_ 21
#define _WHILE_ 22
#define _BREAK_ 23
#define _CONTINUE_ 24
#define _REPEAT_UNTIL_ 25
#define _DO_WHILE_ 26
#define _STR_ 27
#define _ARRAY_ 28
#define _ASSIGN_ARRAY_ 29
#define _READ_ARRAY_ 30
#define _MATRIX_ 31
#define _ASSIGN_MATRIX_ 32
#define _READ_MATRIX_ 33
#define _PTR_ 34
#define _ASSIGN_PTR_ 35
#define _ASSIGN_PTR_ADDR_ 36
#define _READ_PTR_ 37
#define _ADDR_ 38
#define _FUNC_ 39
#define _RET_ 40
#define _ARG_ 41
#define _INIT_ 42
#define _ALLOC_ 43
#define _FREE_ 44
#define _FIELD_ 45
#define _ASSIGN_FIELD_ 46
#define _READ_FIELD_ 47
#define _NULL_ 48


#define booltype 100
#define inttype 101
#define stringtype 102

#define _BRKP_ 200

typedef struct tnode {
	int val;
	struct Typetable *type;
	char *varname;
	int nodetype;
	struct Gsymbol *Gentry;
	struct Lsymbol *Lentry;
	struct tnode *left,*mid,*right;
}tnode;

typedef struct Gsymbol{
	char *name;
	struct Typetable *type;
	int size1,size2;
	int binding;
	int nodetype;
	struct Paramstruct *paramlist;
	int flabel;
	struct Gsymbol *next;
}Gsymbol;

struct Gsymbol *Ghead,*Gtail;

struct Paramstruct{
	char *name;
	struct Typetable *type;
	int binding;
	int nodetype;
	struct Paramstruct *next;
};

struct Paramstruct *Phead,*Ptail;

struct Lsymbol{
  char *name;
	struct Typetable *type;
  int binding;
	int nodetype;
  struct Lsymbol *next;
};

struct Lsymbol *Lhead,*Ltail;

struct Typetable{
    char *name;
		int size;
		struct Fieldlist *fields;
    struct Typetable *next;
};

struct Typetable *Thead,*Ttail;

struct Fieldlist{
  char *name;
  int fieldIndex;
  struct Typetable *type;
  struct Fieldlist *next;
};

struct Fieldlist *Fhead,*Ftail;

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

static int reg=-1,label=0,flabel=0,bind=4096,localbind=1,parambind=1,Findex=0;

FILE *target_file;

int arr[26];

struct tnode* createTree(int val, struct Typetable *type, char *varname, int nodetype, struct tnode *l, struct tnode *m, struct tnode *r);

int codeGen(struct tnode *t);

void TypeTableCreate();

struct Typetable* TLookup(char *name);

void TInstall(char *name,int size, struct Fieldlist *fields);

struct Fieldlist* FLookup(struct Typetable *type, char *name);

void FInstall(struct Typetable *type,char *name);

int GetSize (struct Typetable *type);

void Typesizeallocator (struct Typetable *type);

void printTypetable();

void printField(struct Typetable *type);

void Typeprint(struct Typetable *type);

struct Gsymbol *GLookup(char * name);

void GInstall(char *name, struct Typetable *type, int size1, int size2,int nodetype,struct Paramstruct *paramlist);

struct Lsymbol* LLookup(char *name);

void LInstall(char *name, struct Typetable *type, int nodetype);

struct Paramstruct *PLookup(char * name);

void PInstall(char *name, struct Typetable *type, int nodetype);

void mainfundef(struct tnode *body);

void funcdef(struct Typetable *type,struct tnode *func,struct Paramstruct *Phead,struct tnode *body);

int checkequivalence(struct Paramstruct *declparameters, struct Paramstruct *formalparameters);

char *getFunctionname(int label);

void initialxsmcode(void);

int getReg(void);

void freeReg(void);

int getLabel(void);

int getFlabel(void);

void typechecker(struct tnode *t);

int yyerror(char const *s);

void addLabel(int l1,int l2);

void delLabel(void);

void inorderprint(struct tnode *t);

char* printType(struct Typetable *type);

void nodetypeprint(struct tnode *t);

char *printvartype(int nodetype);

void vartypechecker(struct tnode *t);
