#include <stdio.h>
#include "Employee.h"
#include "CLinkedList.h"

LData DaysAfter(List *list, char * name, int days){
	LData data;
	int i;
	if(LFirst(list,&data)){
		if(NameCompare(data,name)){
			for(i = 0;i<days;i++){
				LNext(list,&data);
			}
			ShowEmployee(data);
		}
		else{
			for(i = 0;i < LCount(list)-1;i++){
				LNext(list,&data);
				if(NameCompare(data,name)){
					for(i = 0;i<days;i++){
						LNext(list,&data);
					}
					ShowEmployee(data);
					break;
				}
			}
		}
	}
}

int main(){
	List list;
	LData data;
	int i, numOfNode;
	ListInit(&list);

	data = MakeEmployee(1, "Helen");
	LInsert(&list, data);

	data = MakeEmployee(2, "John");
	LInsert(&list, data);
	
	data = MakeEmployee(3, "Elley");
	LInsert(&list, data);

	data = MakeEmployee(4, "Anna");
	LInsert(&list,data);

	printf("전 직원 출력\n");

	if(LFirst(&list, &data)){
		ShowEmployee(data);
		
		for(i = 0;i<LCount(&list)-1;i++){
			if(LNext(&list,&data)){
				ShowEmployee(data);}
		}
	}
	printf("\n\n");

	printf("John After 3days\n");
	DaysAfter(&list,"John",3);
}