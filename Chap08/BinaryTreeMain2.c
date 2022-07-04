#include <stdio.h>
#include "BinaryTree2.h"

void ShowIntData(int data);

int main(void){
	BTreeNode * bt1 = MakeTreeNode();
	BTreeNode * bt2 = MakeTreeNode();
	BTreeNode * bt3 = MakeTreeNode();
	BTreeNode * bt4 = MakeTreeNode();
	BTreeNode * bt5 = MakeTreeNode();
	BTreeNode * bt6 = MakeTreeNode();

	SetData(bt1,1);
	SetData(bt2,2);
	SetData(bt3,3);
	SetData(bt4,4);
	SetData(bt5,5);
	SetData(bt6,6);

	MakeLeftSubTree(bt1,bt2);
	MakeRightSubTree(bt1,bt3);
	MakeLeftSubTree(bt2,bt4);
	MakeRightSubTree(bt2,bt5);
	MakeRightSubTree(bt3,bt6);

	PreorderTraverse(bt1,ShowIntData);
	printf("\n");
	InorderTraverse(bt1,ShowIntData);
	printf("\n");
	PostorderTraverse(bt1,ShowIntData);
	printf("\n");

	DeleteTree(bt2);
	
	PreorderTraverse(bt1,ShowIntData);
	printf("\n");
	return 0;
}

void ShowIntData(int data){
	printf("%d ",data);
}