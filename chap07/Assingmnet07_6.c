/*   ���ϸ�: Assignment07_6.c
	 ��  ��: PA06. ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.05.22
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment7_6(void);
void rev(void);

void rev(double arr[])
{
	double reArray[SIZE] = { 0 };
	int i, j;
	for (i = SIZE - 1, j= 0; i >= 0 && j < SIZE; i--, j++)
	{
		reArray[j] = arr[i];
	}

	printf("����: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1f ", reArray[i]);
	}
	printf("\n");

	return;
}

void assignment7_6(void)
{
	double arr[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	
	printf("�迭: ");
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	rev(arr);

	return;
}

int main()
{
	assignment7_6();

	return 0;
}
