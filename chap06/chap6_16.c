// 25.07.05

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_bit_pos(unsigned int num)
{
	for (int i = 31; i >= 0; i--)
	{
		printf("%d", (num >> i) & 1); // AND 연산
		if (i % 4 == 0) printf(" ");
	}
	printf("\n");
}

void print_bit(void)
{
	unsigned int num;
	int binary;

	printf("정수? ");
	scanf("%x", &num);

	printf("%x: ", num);
	is_bit_pos(num);
}

int main()
{
	print_bit();

	return 0;
}