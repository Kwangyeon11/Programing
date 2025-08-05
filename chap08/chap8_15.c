// 25. 07. 19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void sort_array(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size-1; i++)
	{
		for (j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void print_array()
{
	int arr[SIZE] = { 0 };
	srand((unsigned int)time(NULL));
	
	printf("정렬 전: ");
	int i;
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100; // 0 ~ 99
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("정렬 후: ");
	sort_array(arr, SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	print_array();
	return 0;
}