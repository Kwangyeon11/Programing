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

		printf("%g ", arr[i - 1]); // �ڵ� ���� (������ ǥ��)	12345.7 �Ǵ� 1.23457e+04
	}
}

void print_sequence(void)
{
	double first;
	int cr;

	printf("ù ��° ��? ");
	scanf("%lf", &first);

	printf("����? ");
	scanf("%d", &cr);

	printf("������: ");
	get_sequence(first, cr);
}

int main()
{
	print_sequence();

	return 0;
}