#ifndef __LB_STACK_H__
#define __LB_STACK_H__

#define TRUE 1
#define FALSE 0

#include "BinaryTree2.h"

typedef BTreeNode * Data;

typedef struct _stackNode{
	Data data;
	struct _stackNode * next;
}SNode;

typedef struct _listbaseStack{
	SNode * head;
}LBStack;

typedef LBStack Stack;

void StackInit(Stack * s);
int SIsEmpty(Stack * s);
void SPush(Stack * s, Data data);
Data SPop(Stack * s);
Data SPeek(Stack * s);

#endif