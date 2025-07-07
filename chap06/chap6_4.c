// 25.07.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double discount_price(int percent, int price);

double discount_price(int percent, int price)
{
	double product = price - ((percent / 100.0) * price);
	return product;
}

void print_price(void)
{
	int sale, price;

	printf("������(%%)? ");
	scanf("%d", &sale);

	while (1)
	{
		printf("��ǰ�� ����? ");
		scanf("%d", &price);

		if (price != 0)
		{
			printf("���ΰ�: %.0f��\n", discount_price(sale, price));
		}
		else break;
	}
	
	return;
}

int main()
{
	print_price();

	return 0;
}
