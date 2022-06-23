#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist){
	plist->head = (Node *)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}

void FInsert(List * plist, LData pdata){
	Node * newnode = (Node *)malloc(sizeof(Node));
	newnode->data = pdata;

	newnode->next = plist->head->next;
	plist->head->next = newnode;

	(plist->numOfData)++;
}

void SInsert(List * plist, LData pdata){
	Node * newnode = (Node *)malloc(sizeof(Node));
	Node * pred = plist->head;
	newnode->data = pdata;

	while(pred->next != NULL && plist->comp(pdata, pred->next->data)!=0){
		pred = pred->next;
	}

	newnode->next = pred->next;
	pred->next = newnode;

	(plist->numOfData)++;
}

void LInsert(List * plist, LData pdata){
	if(plist->comp == NULL)
		FInsert(plist, pdata);
	else
		SInsert(plist, pdata);
}

int LFirst(List * plist, LData * pdata){
	if(plist->head->next == NULL) return FALSE;
	
	plist->before = plist->head;
	plist->cur = plist->head->next;
	
	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List * plist, LData * pdata){
	if(plist->cur->next == NULL) return FALSE;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE; 
}

LData LRemove(List * plist){
	Node * rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List * plist){
	return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1,LData d2)){
	plist->comp = comp;
}