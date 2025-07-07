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
			printf("���� %8d�� �� �� ���� �⿬��: %d��\n", v, basic);
		}
		else if (v > people)
		{
			int part_fee = basic + (v - people) * running;
			printf("���� %8d�� �� �� ���� �⿬��: %d��\n", v, part_fee);
		}	
	}
	
	return;
}

void cal_pay()
{
	int basic;
	int viewer;
	int running;

	printf("�⺻ �⿬��? ");
	scanf("%d", &basic);

	printf("���� �б��� ���� ��? ");
	scanf("%d", &viewer);

	printf("���� 1�δ� ���� ����Ƽ? ");
	scanf("%d", &running);

	predict_money(basic, running, viewer);

	return;
}

int main()
{
	cal_pay();

	return 0;
}