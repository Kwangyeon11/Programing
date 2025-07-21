// 25. 07. 17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void rand_array(int arr[], int count, int size)
{
	int i, j;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < size; j++)
		{
			arr[j] = rand() % 100; 
			printf("%d ", arr[j]);
		}
		printf("\n");

	}
}

void print_array()
{
	int arr[SIZE] = { 0 };
	int count = 0;
	
	srand((unsigned int)time(NULL));
	count = rand() % SIZE;

	printf("count: %d\n", count);
	rand_array(arr, count, SIZE); // 반복문으로 count만큼 호출해도 O
}

int main()
{
	print_array();
	return 0;
}