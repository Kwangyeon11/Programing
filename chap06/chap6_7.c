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

	printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d", &num);

	int i;
	for (i = 1; i <= num; i++)
	{
		is_prime(i, &prime);
	}

	printf("\n");
	printf("�Ҽ��� ��� %d���Դϴ�.\n", prime);

	return;
}

int main()
{
	print_primenumber();

	return 0;
}