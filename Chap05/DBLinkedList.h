#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node{
	Data data;
	struct _node * prev;
	struct _node * next;
}Node;

typedef struct _DLinkedList{
	Node * head;
	Node * cur;
	Node * tail;
	int numOfData;
}DBLinkedList;

typedef DBLinkedList List;

void ListInit(List * list);
void LInsert(List * list, Data data);

int LFirst(List * list, Data * data);
int LNext(List * list, Data * data);
int LPrevious(List * list, Data * data);

Data LRemove(List * List);

int LCount(List * list);

#endif