// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void reverse_array(double arr[], int size)
{
	int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}

void print_element()
{
	double x[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	double* px = x;

	printf("배열: ");
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%.1f ", *(px + i));
	}
	printf("\n");

	printf("역순: ");
	reverse_array(x, SIZE);
}

int main()
{
	print_element();

	return 0;
}
