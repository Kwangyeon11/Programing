// 25.07.02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ASCII(void);

void print_ASCII(void)
{
	int count = 0;

	for (int i = 32; i < 128; i++)
	{			
		printf(" %c", (char)i);
		count++;

		if (count % 24 == 0) printf("\n"); //if ((i-32) % 24 == 0) printf("\n"); 한 줄에 24개씩 출력
	}

	return;
}

int main()
{
	print_ASCII();

	return 0;
}