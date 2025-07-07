// 25.07.02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cal_pay();
void predict_money(int basic, int running, int people);

void predict_money(int basic, int running, int people)
{
	int v = 0;
	
	int i;
	for (i = 0; i < 15; i++)
	{
		v += 1000000;
		if (v <= people)
		{
			printf("관객 %8d명 일 때 예상 출연료: %d원\n", v, basic);
		}
		else if (v > people)
		{
			int part_fee = basic + (v - people) * running;
			printf("관객 %8d명 일 때 예상 출연료: %d원\n", v, part_fee);
		}	
	}
	
	return;
}

void cal_pay()
{
	int basic;
	int viewer;
	int running;

	printf("기본 출연료? ");
	scanf("%d", &basic);

	printf("손익 분기점 관객 수? ");
	scanf("%d", &viewer);

	printf("관객 1인당 러닝 개런티? ");
	scanf("%d", &running);

	predict_money(basic, running, viewer);

	return;
}

int main()
{
	cal_pay();

	return 0;
}