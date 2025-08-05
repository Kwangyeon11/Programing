// 25. 07. 19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int add_to_multiset(int arr[], int size, int value, int element)
{
	if (value <= 10)
	{
		arr[value - 1] = element;
		return 1;
	}
	if (value > 10)
	{
		return 0;
	} 
}

void print_multiset()
{
	int arr[SIZE] = { 0 };
	int element;
	int value = 0;
	
	while (1)
	{
		printf("배열에 추가할 원소? ");
		scanf("%d", &element);
		value++;

		add_to_multiset(arr, SIZE, value, element);
		int i;
		for (i = 0; i < value; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");

		if (add_to_multiset(arr, SIZE, value, element) == 0)
		{
			printf("배열에 추가할 수 없습니다.\n");
			break;
		}
	}
}

int main()
{
	print_multiset();
	return 0;
}