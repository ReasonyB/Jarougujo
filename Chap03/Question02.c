#include <stdio.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(){
	List list;
	NameCard* namecard;
	
	ListInit(&list);

	namecard = MakeNameCard("Helen","010-1111-1111");
	LInsert(&list,namecard);
	
	namecard = MakeNameCard("Peter","010-2222-2222");
	LInsert(&list,namecard);
	
	namecard = MakeNameCard("Jane", "010-3333-3333");
	LInsert(&list,namecard);

	if(LFirst(&list, &namecard)){
		if(NameCompare(namecard,"Peter") == 0)
			ShowNameCardInfo(namecard);
		while(LNext(&list, &namecard)){
			if(NameCompare(namecard,"Peter") == 0)
				ShowNameCardInfo(namecard);
		}
	}
	
	if(LFirst(&list, &namecard)){
		if(NameCompare(namecard,"Helen") == 0){
			ChangePhoneNum(namecard, "010-7777-9999");
			ShowNameCardInfo(namecard);
		}
		while(LNext(&list, &namecard)){
			if(NameCompare(namecard,"Helen") == 0){
				ChangePhoneNum(namecard, "010-7777-9999");
				ShowNameCardInfo(namecard);
			}
		}
	}

	if(LFirst(&list, &namecard)){
		if(NameCompare(namecard,"Peter") == 0)
			LRemove(&list);
		while(LNext(&list, &namecard)){
			if(NameCompare(namecard,"Peter") == 0)
				LRemove(&list);
		}
	}

	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &namecard)){
			ShowNameCardInfo(namecard);
		while(LNext(&list, &namecard)){
				ShowNameCardInfo(namecard);
		}
	}
}