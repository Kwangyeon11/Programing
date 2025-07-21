// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_element()
{
	int x[10] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
	int* px = x;

	printf("배열: ");
	
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(px + i));
	}
	printf("\n");
	printf("역순: ");

	for (i = 9; i >= 0; i--)
	{
		printf("%d ", *(px + i));
	}
}

int main()
{
	print_element();

	return 0;
}