// 25.07.04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_number(void);

void print_number(void)
{
	int num;
	int sum = 0;

	printf("0~99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");

	srand(time(NULL));

	int i;
	for (i = 0; i < 10; i++)
	{
		int num = rand() % 100;
		printf("%4d", num);
		sum += num;
	}
	
	printf("\n");
	printf("�հ�: %d", sum);
	
	return;
}

int main()
{
	print_number();

	return 0;
}