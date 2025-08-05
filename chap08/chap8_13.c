// 25. 07. 17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_array(int arr1[], int arr2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

void print_array()
{
	int arr1[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int arr2[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };
	int i;
	
	printf("a: ");
	for (i = 0 ; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\nb: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	swap_array(arr1, arr2, 10);
	printf("<< swap_array È£Ãâ ÈÄ >>\n");

	printf("a: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\nb: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
}

int main()
{
	print_array();
	return 0;
}