/*   ���ϸ�: Assignment06_18.c
	 ����: PA18. 0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int num1);
void assignment_18(void);

void divisors(int num1)
{
	int i;
	int count = 0;

	printf("%d�� ���: ", num1);
	for (i = 1; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			count += 1;
			printf("%d ", i);
		}
		else continue;
	}
	printf("=> �� %d��\n", count);

	return;
}

void assignment_18(void)
{
	srand(time(NULL));

	int i;
	for (i = 0; i < 3; i++)
	{
		int num1 = rand() % 1000;

		divisors(num1);
	
	} return;
	
}
int main()
{
	assignment_18();
	return 0;
}

