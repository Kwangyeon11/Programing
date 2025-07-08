// 25. 07. 08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void zero_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}

void print_array()
{
	int arr[10];
	zero_array(arr, 10);
	printf("\n");
}

int main()
{
	print_array();

	return 0;
}
