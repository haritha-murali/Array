#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "array_swap.h"

void display(int8_t *pArray, uint8_t nItems);

int main(void){
	printf("Elements of an array and how to modify an element in it");
	int8_t Data[5] = {0xA,0xB,0xC,0xD,0xE};
	int8_t nItems = sizeof(Data)/sizeof(Data[0]);

	for(int i=0;i<nItems;i++){
			printf("%#x\t",Data[i]);
	}
	printf("\n");

	*(Data+1) = 0x1; 			//Data[1] = 0x1
	printf("%#x\n",*(Data+1));

	for(int i=0;i<nItems;i++){
		printf("%#x\t",Data[i]);
	}
	printf("\n");

	display(&Data[2],nItems-2);      //display((Data+2),nItems-2)

	printf("Swap elements of an array");
	SwapArray();

	return 0;
}

void display(int8_t *pArray, uint8_t nItems){
	for(int i=0;i<nItems;i++){
			printf("%#x\t",pArray[i]);
	}
}
