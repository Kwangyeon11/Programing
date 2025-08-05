// 25. 07. 29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product {

    char name[24];
	int price;
	int stock;

} PRODUCT;

void count_product(PRODUCT* p, int order)
{
	p->price *= order;
	p->stock -= order;

	return;
}

void print_product()
{
	PRODUCT item;
	int order = 0;
	
	printf("제품명? ");
	gets_s(item.name, sizeof(item.name));

	printf("가격? ");
	scanf("%d", &item.price);

	printf("재고? ");
	scanf("%d", &item.stock);

	while (1)
	{
		printf("주문 수량? ");
		scanf("%d", &order);

		if (order == 0)
		{
			printf("종료합니다.\n");
			break;
		}
		
		count_product(&item, order);

		if (item.stock < 1)
		{
			printf("재고가 부족합니다.\n");
			continue;
		}

		printf("결제 금액: %d 재고: %d\n", item.price, item.stock);
	}

}

int main()
{
    print_product();
    return 0;
}