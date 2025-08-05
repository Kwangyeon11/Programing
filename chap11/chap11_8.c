// 25. 08. 03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �ݹ� �Լ� ������ ����: int func(int)
void fill_arr(int arr[], int size, int (*callback)(int));
int increment_it(int n);
int square_it(int n);
int zero_it(int n);

void fill_arr(int arr[], int size, int (*callback)(int))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = callback(arr[i]);
	}
}

int increment_it(int n)
{
	if (n < 0) n = -n;
	return n + 1;
}

int square_it(int n)
{
	return n * n;
}

int zero_it(int n)
{
	return 0;
}

void print_arr()
{
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�迭�� 0���� 1�� Ŀ���� ������ ä�� ��:\n");
	for (int i = 0; i < size; i++)
	{
		arr[i] = i; // �ʱ�ȭ
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	printf("�迭�� ���� ���Һ��� 1��ŭ ū ������ ä�� ��:\n");
	fill_arr(arr, size, increment_it);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("�迭�� ���� ������ �������� ä�� ��:\n");
	fill_arr(arr, size, square_it);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("�迭�� 0���� ä�� ��:\n");
	fill_arr(arr, size, zero_it);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	print_arr();
	return 0;
}