// 25.07.05

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int round_pos(int num, int n)
{
	int x = 1;
	for (int i = 1; i < n; i++) {
		x *= 10;  // 10^(n-1)
	}
	double temp = (double)num / x;
	int result = (int)(round(temp) * x);

	return result;
}

void print_number(void)
{
	int num;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("%d번째 자리에서 반올림한 결과: %d\n", i, round_pos(1357, i));
	}
}

int main()
{
	print_number();

	return 0;
}