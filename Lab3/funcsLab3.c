
#include "funcsLab3.h"

int Calc (float num1, float num2,float* div, float* mult)
{
	if (num2 == 0)
		return 0;

	*mult = num1 * num2;
	*div = num1 / num2;
	
	return 1;
}

void changeTochar(char* pCh)
{
	if ( (*pCh <='z') && (*pCh>='a') )
		*pCh = 'S';

	else if ( (*pCh <='Z') && (*pCh>='A') )
		*pCh = 'C';

	else if ( (*pCh <='0') && (*pCh>='9') )
		*pCh = 'D';

	else 
		*pCh = 'O';

}

int ReversePositive(int* pNum)
{
	int temp,res=0;
	if(*pNum <= 0)//not positive
		return 0;

	//reverse the number
	temp = *pNum;

	while(temp != 0)
	{
		res = (res*10)+temp%10;
		temp /= 10;
	}
	*pNum = res;
	return 1;
}

/* count the numbers of elements that divide by n 
   and count the numbers of elements that the sum of their digits are n */
void SumOf(int arr[], int size, int n, int* pCountDiv, int* pCountSumDig)
{
	*pCountDiv=0;
	*pCountSumDig=0;
	
	for (int i=0 ; i<size ; i++)
	{
		if (arr[i]%n == 0)
			(*pCountDiv)++;
		if (sumOfDigits(arr[i]) == n)
			(*pCountSumDig)++;
	}	

}

int sumOfDigits(int num)
{
	int res=0;
	while (num != 0 )
	{
		res +=(num%10);
		num/=10;
	}
	return res;
}

















