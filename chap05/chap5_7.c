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
	
	printf("�� ��뷮 (kWh)? ");
	scanf("%d", &using);

	if (using <= 200)
	{
		electric = using * 93.3;
		
		sum = basic1 + electric;
		printf("���� ��� �հ�: %7d��\n", sum);
		printf(" - �⺻ ���: %9d��\n", basic1);
		printf(" - ���·� ���: %7d��\n", electric);
	}
	if (using > 200 && using <= 400)
	{
		electric = (200.0 * 93.3) + (using - 200) * 187.9;
		
		sum = basic2 + electric;
		printf("���� ��� �հ�: %7d��\n", sum);
		printf(" - �⺻ ���: %9d��\n", basic2);
		printf(" - ���·� ���: %7d��\n", electric);
	}
	if (using > 400)
	{
		electric = (200.0 * 93.3) + (200.0 * 187.9) + (using - 400) * 280.6;
		
		sum = basic3 + electric;
		printf("���� ��� �հ�: %7d��\n", sum);
		printf(" - �⺻ ���: %9d��\n", basic3);
		printf(" - ���·� ���: %7d��\n", electric);
	}
	
	return;
}

int main()
{
	cal_fee();

	return 0;
}