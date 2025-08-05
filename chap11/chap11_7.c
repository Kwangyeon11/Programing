// 25. 08. 03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int power(int n);

int power(int base, int n)
{
	static int result[10] = { 0 };

	if (n == 0) return 1;

	result[n] = base * power(base, n - 1);

	if (result[n] != 0) return result[n];

	return result[n];
}
int fibonacci(int n)
{
	static int result[20] = { 0 };

	if (n < 0) n = -n;
	if (n == 0 || n == 1) return 1;

	if (result[n] != 0) return result[n];

	result[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return result[n];
}

void print_digit()
{
	// typedef (*function_pointer)(int, int);
	
	int (*fpower)(int, int) = power;
	int (*ffibonacci)(int) = fibonacci;
	int base = 2; // °íÁ¤

	for (int i = 0; i < 10; i++)
	{
		printf("%d ^ %d = %d ", base, i, (*fpower)(base, i));
		printf("\n");
	}
	
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", i, (*ffibonacci)(i));
	}

}

int main()
{
	print_digit();
	return 0;
}