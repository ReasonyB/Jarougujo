#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

typedef struct _employee{
	int id;
	char name[10];
}Employee;

Employee * MakeEmployee(int id, char * name);
void ShowEmployee(Employee * employee);
int NameCompare(Employee * employee,char * name);

#endif