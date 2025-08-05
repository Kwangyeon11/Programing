// 25. 07. 17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

void add_matrix(int (*arr)[SIZE], int size)
{
	printf("x + y 행렬:\n");

	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d ", arr[i][j] + arr[j][i]);
		}
		printf("\n");
	}
}

void print_matrix()
{
	int x[SIZE][SIZE] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	int y[SIZE][SIZE] = { {9, 8, 7}, {6, 5, 4 }, {3, 2, 1} };
	int (*p)[SIZE] = arr;

	printf("x 행렬:\n");
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("y 행렬: \n");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}
	
	add_matrix(p, SIZE);
}

int a()
{
	print_matrix();
	return 0;
}