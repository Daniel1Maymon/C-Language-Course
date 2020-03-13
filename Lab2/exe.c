#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "exe.h"
#include "arrays.h"
#include "functionsLab2.h"

#define ARR_SIZE 6
#define REAL_COLS  4
#define ROWS	3

void Q1_A()
{
	int res;
	int arr[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 6 };

	res = CheckArray(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	if (res == 1)
		printf("This array is growing array\n");
	else
		printf("This array is NOT growing array\n");

	PrintArray(arr2,sizeof(arr2) / sizeof(arr2[0]));
	res = CheckArray(arr2, sizeof(arr2) / sizeof(arr2[0]));
	if (res == 1)
		printf("This array is growing array\n");
	else
		printf("This array is NOT growing array\n");
}

void Q1_B()
{
	int res;
	int arr[ARR_SIZE];
	InitArray(arr, ARR_SIZE); 
	PrintArray(arr, ARR_SIZE);
	res = CheckArray(arr, ARR_SIZE);
	if (res == 1)
		printf("This array is growing array\n");
	else
		printf("This array is NOT growing array\n");

}

void Q2()
{

	char M[ROWS][COLS];
	char ch;
	int count;

	InitMat(M, ROWS, REAL_COLS);
	PrintMat(M, ROWS, REAL_COLS);
	
	
	printf("enter char to check\n");
	do{
		scanf("%c", &ch);
	} while(isspace(ch));

	count = CountCharInMat(M, ROWS,REAL_COLS, ch);
	printf("There are %d %c in matrix\n", count, ch);

}
