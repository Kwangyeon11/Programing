// 25.07.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_bit(void);


void print_bit(void)
{
	unsigned int bit;
	int shift_bit;

	int i;
	for (i = 0; i < 32; i++)
	{
		bit = 1;
		shift_bit = bit << i;
		
		printf("%3d번 비트만 1인 값: %08x %d\n", i, shift_bit, shift_bit);
	}

	return;
}

int main()
{
	print_bit();

	return 0;
}