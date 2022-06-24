#include <stdio.h>
#include "DBLinkedList.h"

int main(){
	List list;
	Data data;
	ListInit(&list);

	LInsert(&list,1);LInsert(&list,2);
	LInsert(&list,3);LInsert(&list,4);
	LInsert(&list,5);LInsert(&list,6);
	LInsert(&list,7);LInsert(&list,8);

	printf("저장된 데이터 조회\n");
	if(LFirst(&list,&data)){
		printf("%d ", data);
		while(LNext(&list,&data))
			printf("%d ", data);
		printf("\n\n");
	}

	printf("2의 배수 모두 삭제\n");
	if(LFirst(&list,&data)){
		if(data%2 ==0)
			LRemove(&list);
		while(LNext(&list,&data))
			if(data%2 == 0)
				LRemove(&list);
	}
	printf("작업 완료!\n\n");
	
	printf("저장된 데이터 재조회\n");
	if(LFirst(&list,&data)){
		printf("%d ", data);
		while(LNext(&list,&data))
			printf("%d ", data);
		printf("\n\n");
	}
}