#ifndef __ARRAY_BASE_STACK_H__
#define __ARRAY_BASE_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arraystack{
	Data stackArr[STACK_LEN];
	int topOfIndex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * stack);

int SIsEmpty(Stack * stack);

void SPush(Stack * stack, Data data);
Data SPop(Stack * stack);
Data SPeek(Stack * stack);

#endif