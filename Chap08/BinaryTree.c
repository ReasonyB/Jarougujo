#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode * MakeBTreeNode(void){
	BTreeNode * newNode = (BTreeNode *)malloc(sizeof(BTreeNode));
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
BTData GetData(BTreeNode * bt){
	return bt->data;
}
void SetData(BTreeNode * bt, BTData data){
	bt->data = data;
}

BTreeNode * GetDataLeftSubTree(BTreeNode * bt){
	return bt->left;
}
BTreeNode * GetDataRightSubTree(BTreeNode * bt){
	return bt->right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub){
	if(main->left != NULL)
		free(main->left);
	main->left = sub;
}
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub){
	if(main->right != NULL)
		free(main->right);
	main->right = sub;
}

void InorderTraverse(BTreeNode * bt){
	if(bt == NULL)
		return;
	InorderTraverse(bt->left);
	printf("%d \n",bt->data);
	InorderTraverse(bt->right);
}