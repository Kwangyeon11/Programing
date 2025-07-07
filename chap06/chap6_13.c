// 25.07.04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_days_of_month(int year, int month);

int isLeapYear(int year) 
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

void is_days_of_month(int year, int month)
{
	int month_a[] = { 31, 28 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month_b[] = { 31, 29 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (isLeapYear(year))
	{
		printf("%3d월:3%d일 ", month, month_a[month-1]);
	}
	else
	{
		printf("%3d월:%3d일 ", month, month_b[month-1]);
	}
	
	return;
}

void print_days(void)
{
	int year;
	
	printf("연도? ");
	scanf("%d", &year);

	printf("[ %d년 ]\n", year);

	int count = 0;
	int i;
	for (i = 1; i <= 12; i++)
	{
		is_days_of_month(year, i);
		count++;

		if (count % 6 == 0)
		{
			printf("\n");
		}
		else continue;
	}

	return;
}

int main()
{
	print_days();

	return 0;
}