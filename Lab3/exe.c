#include "exe.h"
#include "funcsLab3.h"
#include "arrays.h"
#include <stdio.h>

void Q_DivMult()
{
	float num1, num2;
	float div, mult;

	printf("Enter 2 numbers\n");
	scanf("%f %f",&num1,&num2);

	if (!Calc(num1,num2, &div, &mult))//We send the variable and two addresses for result
		printf("Error\n"); //in case the func return 0
	 else 
		printf("num1*num2 = %.2f, num1/num2 = %.2f\n",mult,div);
	
}

void Q_changeChar()
{
	char ch = 'F';
	changeTochar(&ch);
	printf("%c\n", ch);

}

void Q_Reverse()
{
	int num;

	printf("please enter a number if positive will reverse its digits\n");
	scanf("%d",&num);

	if (ReversePositive(&num) == 1)
		printf("The number was reverse %d\n",num);
	else
		printf("The number was  NOT reverse - negative %d\n",num);
}

void Q_Arr_Sum_Events()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9,111,21};
	int num = 3;
	int countDiv,countSumDig;

	int size = sizeof(arr)/sizeof(int);
	printArr(arr,size);
	SumOf(arr, size, num, &countDiv, &countSumDig);

	printf("Division by %d - There are %d numbers\n",num,countDiv);
	printf("sum digits %d - There are %d numbers\n",num,countSumDig);

}

