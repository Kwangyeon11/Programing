/*   ���ϸ�: Assignment07_8.c
	 ��  ��: PA08. ��ǰ ������ ����� ������ �迭�� ���Ͽ� �������� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.05.22
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void assignment7_8(void);
void downitem(void);

void downitem(int item[], int discount)
{
	int item2[SIZE] = { 0 };
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		item2[i] = (int)item[i] * ((100.0 - discount) / 100.0);
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("����: %7d --> ���ΰ�:%7d\n", item[i], item2[i]);
	}
	return;
}


void assignment7_8(void)
{
	int item[SIZE] = { 0 };
	int discount = 0;

	printf("��ǰ�� 5���� �Է��ϼ���: \n");
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		scanf(" %d", &item[i]);
	}
	
	printf("������(%%)? ");
	scanf(" %d", &discount);

	downitem(item, discount);

	return;
}

int main()
{
	assignment7_8();

	return 0;
}