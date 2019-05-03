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
#define _NEW_ 49
#define _DELETE_ 50
#define _METHOD1_ 51
#define _METHOD2_ 52
#define _METHOD3_ 53

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
  char *name;               			//name of the variable or function
  struct Typetable *type;   			//pointer to the Typetable entry of variable type/return type of the function
  struct Classtable *Ctype;  			//THIS FIELD IS REQUIRED ONLY FOR OEXPL
  int size1,size2;                //size of an array. (The sizes of all other variables in 1)
  int binding;              			//stores memory address allocated to the variable
	int nodetype;
	struct Paramstruct *paramlist;	//pointer to the head of argument list in case of functions
	int flabel;
  struct Gsymbol *next;     			//points to the next Global Symbol Table entry
}Gsymbol;

struct Gsymbol *Ghead,*Gtail;

struct Classtable {
 	char *name;                           //name of the class
	struct Fieldlist *Memberfield;        //pointer to Fieldlist
	struct Memberfunclist *Vfuncptr;      //pointer to Memberfunclist
	struct Classtable *Parentptr;         //pointer to the parent's class table
	int Class_index;                      //position of the class in the virtual function table
	int Fieldcount;                       //count of fields
  int Methodcount;                      //count of methods
	struct Classtable *next;              //pointer to next class table entry
};

struct Classtable *Chead,*Ctail;
struct Classtable *Class;

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
	char *name;								//name of the field
	int fieldIndex;						//position of the field
	struct Typetable *type;		//pointer to typetable
	struct Classtable *Ctype;	//pointer to the class containing the field
	struct Fieldlist *next;		//pointer to next fieldlist entry
};

struct Fieldlist *Fhead,*Ftail;

struct Memberfunclist {
 	char *name;                      //name of the member function in the class
	struct Typetable *type;          //pointer to typetable
	struct Paramstruct *paramlist;   //pointer to the head of the formal parameter list
	int Funcposition;                //position of the function in the class table
 	int flabel;                      //A label for identifying the starting address of the function's code in the memory
	struct Memberfunclist *next;     //pointer to next Memberfunclist entry
};

struct Memberfunclist *Mhead,*Mtail;

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

static int reg=-1,label=0,flabel=0,bind=4096,localbind=1,parambind=1,Findex=0,Cindex=0,start=0;

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

void printField1(struct Typetable *type);

void printFieldType(struct Typetable *type);

void CInstall(char *name,char *parent_class_name);

struct Classtable* CLookup(char *name);

void Class_Finstall(struct Classtable *cptr, char *typename, char *name);

void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *Type, struct Paramstruct *paramlist);

void printClassType(struct Classtable *Ctype);

void printClasstable();

void printField2(struct Classtable *Ctype);

void printMethod(struct Classtable *Ctype);

void printMethodtype(struct Typetable *type);

struct Memberfunclist* Class_Mlookup (struct Classtable* Ctype,char* name);

struct Fieldlist* Class_Flookup(struct Classtable* Ctype,char* name);

struct Gsymbol *GLookup(char * name);

void GInstall(char *name, struct Typetable *type, struct Classtable *Ctype, int size1, int size2,int nodetype,struct Paramstruct *paramlist);

struct Lsymbol* LLookup(char *name);

void LInstall(char *name, struct Typetable *type, int nodetype);

struct Paramstruct *PLookup(char * name);

void PInstall(char *name, struct Typetable *type, int nodetype);

void mainfundef(struct tnode *body);

void funcdef(struct Typetable *type,struct Classtable *Ctype,struct tnode *func,struct Paramstruct *Phead,struct tnode *body);

int checkequivalence(struct Paramstruct *declparameters, struct Paramstruct *formalparameters);

void reverseparamlist(struct Paramstruct *Phead);

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
