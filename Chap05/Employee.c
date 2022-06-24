#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

Employee * MakeEmployee(int id, char * name){
	Employee * newEmpee = (Employee *)malloc(sizeof(Employee));
	newEmpee->id = id;
	strncpy(newEmpee->name,name,10);
	return newEmpee;
}

void ShowEmployee(Employee * employee){
	printf("사번 : %d\t이름: %s\n",employee->id,employee->name);
}

int NameCompare(Employee * employee, char * name){
	if(strcmp(employee->name,name)== 0) return 1;
	return 0;
}