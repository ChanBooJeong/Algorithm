/*
	Created by ChanBoo Jeong 
	date : 20th Aug in 2019
*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *num, int count);

int main(int argc, char *argv[])
{
	int *num  = NULL;
	int count = 0;
	
	scanf("%d", &count);
	
	num = (int *)malloc(sizeof(int) * count);
	
	for(int i = 0 ; i < count; i++)
	{
		scanf("%d", &num[i]);
	}
	
	bubbleSort(num, count);
	
	printf("\n");
	
	for(int i = 0; i < count; i++)
	{
		printf("%d ", num[i]);
	}
	
	free(num);
	
	return 0;
}

void bubbleSort(int *num, int count)
{
	int i = 0, j = 0, temp = 0;
	
	for(i = 0; i < count - 1; i++)
	{
		for(j = 0; j < count - 1 - i; j++)
		{
			if(num[j] >= num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
}