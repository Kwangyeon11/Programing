// 25.07.04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_number(void);

void print_number(void)
{
	int num;
	int sum = 0;

	printf("0~99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");

	srand(time(NULL));

	int i;
	for (i = 0; i < 10; i++)
	{
		int num = rand() % 100;
		printf("%4d", num);
		sum += num;
	}
	
	printf("\n");
	printf("합계: %d", sum);
	
	return;
}

int main()
{
	print_number();

	return 0;
}