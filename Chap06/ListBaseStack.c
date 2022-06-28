#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void StackInit(Stack * stack){
	stack->head = NULL;
}

int SIsEmpty(Stack * stack){
	if(stack->head == NULL) return TRUE;
	return FALSE;
}

void SPush(Stack * stack, Data data){
	Node * newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	
	newNode->next = stack->head;
	stack->head = newNode;
}

Data SPop(Stack * stack){
	Node * rpos;
	Data data;

	if(SIsEmpty(stack)){
		printf("Error : Stack is Empty\n");
		exit(-1);
	}
	
	rpos = stack->head;
	data = rpos->data;

	stack->head =stack->head->next;
	free(rpos);
	
	return data;
}

Data SPeek(Stack * stack){
	if(SIsEmpty(stack)){
		printf("Error : Stack is Empty\n");
		exit(-1);
	}
	return stack->head->data;
}