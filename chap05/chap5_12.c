// 25.07.02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cal_interest(void);

void cal_interest(void)
{
	double principal;
	double rate;
	
	printf("원금? ");
	scanf("%lf", &principal);

	printf("연이율(%%)? ");
	scanf("%lf", &rate);

	int i;
	for (i = 1; i < 11; i++)
	{
		double interest = principal * (rate / 100);
		principal = principal + interest;
		
		printf("%2d년째 이자: %.2f, 원리합계: %.2f\n", i, interest, principal);

	}

	return;
}

int main()
{
	cal_interest();

	return 0;
}