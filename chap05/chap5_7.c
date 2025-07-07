// 25.07.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cal_fee(void);

void cal_fee(void)
{

	int using;
	int electric;
	int sum = 0;
	const int basic1 = 910, basic2 = 1600, basic3 = 7300;
	
	printf("월 사용량 (kWh)? ");
	scanf("%d", &using);

	if (using <= 200)
	{
		electric = using * 93.3;
		
		sum = basic1 + electric;
		printf("전기 요금 합계: %7d원\n", sum);
		printf(" - 기본 요금: %9d원\n", basic1);
		printf(" - 전력량 요금: %7d원\n", electric);
	}
	if (using > 200 && using <= 400)
	{
		electric = (200.0 * 93.3) + (using - 200) * 187.9;
		
		sum = basic2 + electric;
		printf("전기 요금 합계: %7d원\n", sum);
		printf(" - 기본 요금: %9d원\n", basic2);
		printf(" - 전력량 요금: %7d원\n", electric);
	}
	if (using > 400)
	{
		electric = (200.0 * 93.3) + (200.0 * 187.9) + (using - 400) * 280.6;
		
		sum = basic3 + electric;
		printf("전기 요금 합계: %7d원\n", sum);
		printf(" - 기본 요금: %9d원\n", basic3);
		printf(" - 전력량 요금: %7d원\n", electric);
	}
	
	return;
}

int main()
{
	cal_fee();

	return 0;
}