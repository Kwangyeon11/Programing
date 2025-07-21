// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4    // �� ũ��


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

	int (*p)[5] = &arr;    // �迭 ����(��ǰ)�� ���� ������: int *p, �迭 ��ü(��Ű��)�� ���� ������: int(*p)[]
	int element;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &element);

	fill_2d_array(&arr, SIZE, element);
}

int main()
{
	print_array();

	return 0;
}