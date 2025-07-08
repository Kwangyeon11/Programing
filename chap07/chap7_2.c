// 25. 07. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10


void get_sequence(double first, int cr);

void get_sequence(double first, int cr)
{
	double arr[SIZE] = { 0 };

	for (int i = 1; i <= SIZE; i++)
	{
		double num = pow(cr, i - 1);

		arr[i-1] = first * num;

		printf("%g ", arr[i - 1]); // 자동 선택 (간결한 표현)	12345.7 또는 1.23457e+04
	}
}

void print_sequence(void)
{
	double first;
	int cr;

	printf("첫 번째 항? ");
	scanf("%lf", &first);

	printf("공비? ");
	scanf("%d", &cr);

	printf("등비수열: ");
	get_sequence(first, cr);
}

int main()
{
	print_sequence();

	return 0;
}