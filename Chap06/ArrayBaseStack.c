#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack * stack){
	stack->topOfIndex = -1;
}

int SIsEmpty(Stack * stack){
	if(stack->topOfIndex<0) return TRUE;
	return FALSE;
}

void SPush(Stack * stack, Data data){
	if(stack->topOfIndex==STACK_LEN-1){
		printf("데이터 저장 실패: 저장할 공간이 없습니다.\n");
		return;
	}

	stack->stackArr[stack->topOfIndex+1] = data;
	(stack->topOfIndex)++;
}

Data SPop(Stack * stack){
	int rdx;
	if(SIsEmpty(stack)){
		printf("ERROR: Stack Memory is Empty\n");
		exit(-1);
	}
	
	rdx = stack->topOfIndex;
	(stack->topOfIndex)--;
	
	return stack->stackArr[rdx];
}

Data SPeek(Stack * stack){
	if(SIsEmpty(stack)){
		printf("ERROR: Stack Memory is Empty\n");
		exit(-1);
	}
	
	return stack->stackArr[stack->topOfIndex];
}