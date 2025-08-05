// 25. 08. 01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int power(int n);

int power(int base, int n)
{
	static int result[10] = { 0 }; // 2차원 배열로 저장 (11_6)
	
	if (n == 0) return 1;

	result[n] = base * power(base, n - 1);
	
	if (result[n] != 0) return result[n];

	return result[n];
}

void print_digit()
{
	int base = 0;
	
	printf("밑(base)? ");
	scanf("%d", &base);

	for (int i = 0; i < 10; i++) // exponent 0 to 9
	{
		printf("%d ^ %d = %d ", base, i, power(base, i));
		printf("\n");
	}

}

int main()
{
	print_digit();
	return 0;
}