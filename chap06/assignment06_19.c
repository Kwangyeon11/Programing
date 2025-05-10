/*   ���ϸ�: Assignment06_19.c
	 ����: PA19. 0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int data, int scale, char ch);

void assignment_19();

void graph(int data, int scale, char ch)
{
	int star = data / scale;
	int i;

	printf("%d:", data);
	
	for (i = 0; i < star; i++)
	{
		printf("%c", ch);
	} 
	printf("\n");
	return;
}

void assignment_19()
{
	srand(time(NULL));

	const scale = 100;

	int i;
	for (i = 0; i < 3; i++)
	{
		int data = rand() % 1000;

		graph(data, scale, '*');
	} 
	return;
}

int main()
{
	assignment_19();
	return 0;
}