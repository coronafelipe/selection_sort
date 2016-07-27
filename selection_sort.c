/*
 	Author		:Felipe Corona
	Date		:October 24, 2014
	Description	:Lab 4 - Selection Sort
*/

#include<stdio.h>

int findMin(int A[20], int i, int j);
int main()
{
	int minIndex;
	int A[20];
	int lastIndex = 0;
	int counter;
	printf("Please enter 20 intergers to fill the array: ");
	int input;
	while(lastIndex < 20)
	{
		scanf(" %d", &input);
		A[lastIndex] = input;
		lastIndex++;
	}

	
	printf("Before :A[20] = {");
	for(counter = 0; counter < lastIndex; counter++)
	{
		printf(" %d", A[counter]);
	}
	printf("} \n");

	for(counter = 0; counter < lastIndex; counter++)
	{
		minIndex = findMin(A, counter, lastIndex - 1);
		int temp = A[counter];
		A[counter] = A[minIndex];
		A[minIndex] = temp;	
	}

	printf("After Selection Sort: A[20] = {");
	for(counter = 0; counter < lastIndex; counter++)
	{
		printf(" %d", A[counter]);
	}
	printf("} \n");
	
		

	return 0;
}
int findMin(int A[20], int i, int j)
{

	int minIndex = i;
	int counter;
	for(counter = i + 1; counter <= j; counter++)
	{	
		if(A[minIndex] > A[counter])
		{	
			minIndex = counter;
		}
	}
	
	return minIndex;
}
