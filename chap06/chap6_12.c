// 25.07.04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int year);

int is_leap_year(int year)
{
	if (year % 4 == 0)
	{
		return year;
	}
}

void print_year(void)
{
	int leap = 0;
	int* pl = &leap;

	printf("2000~2100ªÁ¿Ã¿« ¿±≥‚\n");

	int i;
	for (i = 2000; i < 2100; i++)
	{
		leap = is_leap_year(i);
		if (*pl == i) // if (leap == i)
		{
			printf("%5d", leap);
		}
		
 	}

	return;
}

int main()
{
	print_year();

	return 0;
}