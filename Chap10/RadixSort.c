#include <stdio.h>
#include "ListBaseQueue.h"

#define BUKET_NUM  10

void RadixSort(int arr[],int num, int maxLen){
	Queue buckets[BUKET_NUM];
	int bi;
	int pos;
	int di;
	int divfac = 1;
	int radix;

	for(bi=0;bi<BUCKET_NUM;bi++)
		QueueInit(&buckets[bi]);
	
	for(pos=0;pos<maxLen;pos++){
		for(di = 0;di<num; di++){
			
		}
	}
}