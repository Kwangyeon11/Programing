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
		printf("���� �ð�(��)? ");
		scanf("%d", &min);

		if (min == 0) break;
		
		if (min <= 30)
		{
			total += basic;
		}
		else if (min > 30 && min < 1440)
		{
			total = basic + (int)ceil((min - 30) / 10.0) * sub; // 2.2 -> 3.0 �ݿø� ���

			if (total > 25000) total = 25000;
		}
		else
		{
			printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");
			continue;
		}

		printf("���� ���: %d��\n", total);
	}

	return;
}

int main()
{
	cal_fee();

	return 0;
}
