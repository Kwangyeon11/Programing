// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4    // 행 크기


void fill_2d_array(int (*arr)[5], int size, int element)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = element;
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print_array()
{
	int arr[4][5];

	int (*p)[5] = &arr;    // 배열 원소(단품)에 대한 포인터: int *p, 배열 전체(패키지)에 대한 포인터: int(*p)[]
	int element;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &element);

	fill_2d_array(&arr, SIZE, element);
}

int main()
{
	print_array();

	return 0;
}