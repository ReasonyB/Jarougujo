#ifndef _EXPRESSION_TREE_H__
#define _EXPRESSION_TREE_H__

#include "BinaryTree2.h"

BTreeNode * MaekExpTree(char exp[]);
int EvaluateExpTree(BTreeNode * bt);

void ShowPrefixTypeExp(BTreeNode * bt);
void ShowInfixTypeExp(BTreeNode * bt);
void ShowPostfixTypeExp(BTreeNode * bt);

#endif