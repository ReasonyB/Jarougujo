#include <stdio.h>
#include "InfixCalculator.h"

int main(){
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	printf("%s\n",exp1);
	printf("> %d\n",EvalInfixExp(exp1));
	printf("%s\n",exp2);
	printf("> %d\n",EvalInfixExp(exp2));
	printf("%s\n",exp3);
	printf("> %d\n",EvalInfixExp(exp3));
	return 0;
}