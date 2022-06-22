#include <stdio.h>
#include "ArrayList.h"

int main(){
	List list;
	int data;
	int i;
	int sum = 0;
	ListInit(&list);
	
	for(i = 1;i<10;i++)
		LInsert(&list,i);
	
	if(LFirst(&list, &data)){
		sum += data;
		while(LNext(&list, &data))
			sum += data;
	}
	printf("모든 데이터 합: %d \n\n", sum);

	if(LFirst(&list,&data)){
		if(data%2 == 0 || data%3 == 0){
			LRemove(&list);
		}
		while(LNext(&list, &data))
			if(data%2 == 0 || data%3 == 0)
				LRemove(&list);
	}

	printf("현재 데이터의 수: %d\n",LCount(&list));
	if(LFirst(&list,&data)){
		if(LFirst(&list,&data)){
		printf("%d ",data);

		while(LNext(&list,&data))
			printf("%d ",data);
	}
	
	printf("\n\n");
	}
}