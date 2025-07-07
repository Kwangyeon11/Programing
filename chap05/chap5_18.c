// 25.07.02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // (int)ceil()

void cal_fee(void);

void cal_fee(void)
{
	int min = 0;
	int	total = 0;
	const int basic = 2000;
	const int sub = 1000;
	
	while (1)
	{
		printf("주차 시간(분)? ");
		scanf("%d", &min);

		if (min == 0) break;
		
		if (min <= 30)
		{
			total += basic;
		}
		else if (min > 30 && min < 1440)
		{
			total = basic + (int)ceil((min - 30) / 10.0) * sub; // 2.2 -> 3.0 반올림 계산

			if (total > 25000) total = 25000;
		}
		else
		{
			printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
			continue;
		}

		printf("주차 요금: %d원\n", total);
	}

	return;
}

int main()
{
	cal_fee();

	return 0;
}
