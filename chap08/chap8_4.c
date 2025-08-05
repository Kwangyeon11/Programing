// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void print_element()
{
	double x[SIZE] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* px = x;
	double sum = 0.0;

	printf("¹è¿­: ");

	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%.2f ", *(px + i));
	}
	printf("\n");
	
	for (i = 0; i < SIZE; i++)
	{
		sum += *(px + i);
	}
	sum = sum / SIZE;

	printf("Æò±Õ: %lf", sum);
}

int main()
{
	print_element();

	return 0;
}