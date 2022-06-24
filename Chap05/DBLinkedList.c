#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List * list){
	list->head = (Node *)malloc(sizeof(Node));
	list->tail = (Node *)malloc(sizeof(Node));

	list->head->next = list->tail;
	list->head->prev = NULL;

	list->tail->prev = list->head;
	list->tail->next = NULL;
	
	list->numOfData = 0;
}

void LInsert(List * list, Data data){
	Node * newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	newNode->prev = list->tail->prev;
	list->tail->prev->next = newNode;

	newNode->next = list->tail;
	list->tail->prev = newNode;

	(list->numOfData)++;
}

int LFirst(List *list, Data * data){
	if(list->head->next == list->tail) return FALSE;
	
	list->cur = list->head->next;
	*data = list->cur->data;

	return TRUE;
}

int LNext(List *list, Data * data){
	if(list->cur->next == list->tail) return FALSE;
	
	list->cur = list->cur->next;
	*data = list->cur->data;
	
	return TRUE;
}

int LPrevious(List * list, Data * data){
	if(list->cur->prev == list->head) return FALSE;

	list->cur = list->cur->prev;
	*data = list->cur->data;

	return TRUE;
}

Data LRemove(List *list){
	Node * rpos = list->cur;
	Data rdata = rpos->data;

	list->cur->prev->next = list->cur->next;
	list->cur->next->prev = list->cur->prev;
	
	list->cur = list->cur->prev;
	free(rpos);
	
	(list->numOfData)--;
	return rdata;
}

int LCount(List * list){
	return list->numOfData;
}