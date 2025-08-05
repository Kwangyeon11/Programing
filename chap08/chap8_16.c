// 25. 07. 19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define ASCENDING 0
#define DESCENDING 1

void sort_array_with_order(int arr[], int size, int order)
{
	
	if (order == 0)
	{
		int i, j;
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
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
	else if (order == 1)
	{
		int i, j;
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (arr[i] < arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
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
	
	
	printf("오름차순 정렬 후: ");
	sort_array_with_order(arr, SIZE, 0);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("내림차순 정렬 후: ");
	sort_array_with_order(arr, SIZE, 1);
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