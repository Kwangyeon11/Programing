// 25.07.05

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double electric_charge(int using)
{
	const int b1 = 910, b2 = 1600, b3 = 7300;

	double e1 = 93.3, e2 = 187.9, e3 = 280.6;

	double sum = 0.0;

	if (using <= 200)
	{
		sum = b1 + (using * e1);
		return sum;
	}
	else if (using <= 400)
	{
		sum = b2 + (e1 * 200) + e2 * (using - 200);
		return sum;
	}
	else
	{
		sum = b3 + (e1 * 200) + (e2 * 200) + (using - 400) * e3;
		return sum;
	}
}

void print_charge()
{
	int electric;
	double charge = 0.0;

	while (1)
	{
		printf("월 사용량 (kWh)? ");
		scanf("%d", &electric);

		if (electric == -1) break;

		charge = electric_charge(electric);

		printf("전기 요금: %.0f원\n", charge);
	}

}

int main()
{
	print_charge();
	
	return 0;
}