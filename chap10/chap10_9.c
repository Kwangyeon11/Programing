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
	
	printf("��ǰ��? ");
	gets_s(item.name, sizeof(item.name));

	printf("����? ");
	scanf("%d", &item.price);

	printf("���? ");
	scanf("%d", &item.stock);

	while (1)
	{
		printf("�ֹ� ����? ");
		scanf("%d", &order);

		if (order == 0)
		{
			printf("�����մϴ�.\n");
			break;
		}
		
		count_product(&item, order);

		if (item.stock < 1)
		{
			printf("��� �����մϴ�.\n");
			continue;
		}

		printf("���� �ݾ�: %d ���: %d\n", item.price, item.stock);
	}

}

int main()
{
    print_product();
    return 0;
}