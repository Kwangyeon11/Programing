// 25.07.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_prime(int num);
void print_primenumber(void);

void is_prime(int num, int *p)
{
	int count = 0;
	
	int j;
	for (j = 1; j<= num; j++)
	{
		if (num % j == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf(" %d", num);
		*p += 1;
	}
	
	return;
}

void print_primenumber(void)
{
	int num;
	int prime = 0;

	printf("1~N사이의 소수를 구합니다. N은? ");
	scanf("%d", &num);

	int i;
	for (i = 1; i <= num; i++)
	{
		is_prime(i, &prime);
	}

	printf("\n");
	printf("소수는 모두 %d개입니다.\n", prime);

	return;
}

int main()
{
	print_primenumber();

	return 0;
}