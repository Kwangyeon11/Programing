/*   ���ϸ�: Assignment07_4.c
	 ��  ��: PA04. Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.05.21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void assignment7_4(void);

void getMAX(void);
void getMIN(void);

void getMAX(int arr[], int size)
{
	int i;
	int index;
	int max = arr[0];

	for (i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
		else continue;
	}
	printf("�ִ�: �ε���=%d, ��=%d", index, max);
	printf("\n");

	return;
}
void getMIN(int arr[], int size)
{
	int i;
	int index;
	int min = arr[0];

	for (i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
		else continue;
	
	}
	printf("�ּڰ�: �ε���=%d, ��=%d", index, min);
	printf("\n");

	return;
}

void assignment7_4(void)
{
	int arr[] = { 23, 45, 62,12,99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int i;
	printf("�迭: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	getMAX(arr, size);
	getMIN(arr, size);
	
	return;
	
}

int main()
{
	assignment7_4();

	return 0;
}