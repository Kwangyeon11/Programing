// 25. 07. 29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct date {

	int year;
	int month;
	int day;

} DATE;

int is_same_date(DATE *p1, DATE *p2)
{
	if (p1->month == p2->month && p1->day == p2->day) {
		return 1;
	} else {
		return 0;
	}
}

void print_date()
{
	DATE days1 = { 0 };
	DATE* p1 = &days1;

	DATE days2 = { NULL, 1, 1 }; // ������
	DATE* p2 = &days2;

	while (1)
	{
		printf("��¥(������)? ");
		scanf("%d %d %d", &days1.year, &days1.month, &days1.day);

		if (days1.year == 0 && days1.month == 0 && days1.day == 0)
		{
			printf("�����մϴ�.\n");
			break;
		}

		if (is_same_date(p1, p2))
		{
			printf("%d/%d/%d�� �������Դϴ�.\n", days1.year, days1.month, days1.day);
		}
		else
		{
			printf("%d/%d/%d�� �������� �ƴմϴ�.\n", days1.year, days1.month, days1.day);
		}
	}
	
}

int main()
{
	print_date();
	return 0;
}