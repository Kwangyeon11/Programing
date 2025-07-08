// 25. 07. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int arr[], int size)
{
	int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
int find_min(int arr[], int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

void print_num()
{
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("¹è¿­: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("ÃÖ´ñ°ª: %d\n", find_max(arr, size));
	printf("ÃÖ´ñ°ª: %d\n", find_min(arr, size));
}

int main()
{
	print_num();

	return 0;
}