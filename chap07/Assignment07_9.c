/*   ���ϸ�: Assignment07_9.c
	 ��  ��: PA09. 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.05.23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

void assignment7_9(void);
void draw_graph(int arr[], char ch);

void draw_graph(int fee, char ch) // ���ڰ� ���� ��, �Ű������� ������ ����
{
	int i;
	int count = fee / 2000.0;
	for (i = 0; i < count; i++)
	{
			printf("%c", ch);
	}
}

void assignment7_9(void)
{
	int yearfee[SIZE] = { 0 };
	srand(time(NULL));

	int i;
	for (i = 0; i < SIZE; i++)
	{
		yearfee[i] = rand() % (100000 - 10000 + 1) + 10000;
	}
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d�� %5d:", i + 1, yearfee[i]);
		draw_graph(yearfee[i], '*'); // �迭 ���Ҹ� ���� = ���� ���� ����
		printf("\n");
	}
}

int main()
{
	assignment7_9();

	return 0;
}
