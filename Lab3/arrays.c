#include <stdio.h>
#include "arrays.h"

void printArr(int arr[],int size)
{
	for (int i=0 ; i<size ; i++)
		printf("%5d",arr[i]);
	printf("\n");
}
