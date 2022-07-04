#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void StackInit(Stack * s){
	s->head = NULL;
}
int SIsEmpty(Stack * s){
	if(s->head == NULL) return TRUE;
	return FALSE;
}
void SPush(Stack * s, Data data){
	SNode * newNode = (SNode *)malloc(sizeof(SNode));
	newNode->data = data;

	newNode->next = s->head;
	s->head = newNode;
}
Data SPop(Stack * s){
	SNode * delNode;
	Data delData;
	if(SIsEmpty(s)){
		printf("Stack Is Empty\n");
		exit(-1);
	}
	delNode = s->head;
	delData = delNode->data;
	
	s->head = s->head->next;
	free(delNode);
	
	return delData;
}
Data SPeek(Stack * s){
	if(SIsEmpty(s)){
		printf("Stack Is Empty\n");
		exit(-1);
	}
	return s->head->data;
}
