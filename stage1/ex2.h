typedef struct tnode
{
	int val;
	char *op;
	struct tnode *left,*right;
}tnode;

struct tnode* makeLeafNode(int n);
	
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

int codeGen(struct tnode *t);

int getReg(void);

void freeReg(void);

static int reg=0;

FILE *target_file;
