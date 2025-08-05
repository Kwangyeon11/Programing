// 25. 07. 30

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product {
    char name[24];
    int price;
    int stock;
} PRODUCT;

void cal_product(PRODUCT* items, PRODUCT* order, int order_qty)
{
    for (int i = 0; items[i].name[0] != '\0'; i++)
    {
        if (strcmp(items[i].name, order->name) == 0)
        {
            if (items[i].stock >= order_qty)
            {
                order->price = items[i].price * order_qty;
                items[i].stock -= order_qty; // items�� ��� ����ǰ� ������ ������
                order->stock = items[i].stock;
                return;
            }
            else
            {
                printf("��� �����մϴ�. ���� ���: %d\n", items[i].stock);
                order->price = 0;
                order->stock = items[i].stock;
                return;
            }
        }
    }

}

void print_product()
{
    PRODUCT item[5] = {
        {"�Ƹ޸�ī��", 4000, 10},
        {"ī���", 4500, 10},
        {"�÷�ȭ��Ʈ", 5000, 10}
    };
    PRODUCT order_item = { 0 };

    for (int i = 0; i < 5; i++)
    {
        printf("�ֹ��� ��ǰ��? ");
        getchar(); 
        gets_s(order_item.name, sizeof(order_item.name));

        if (strcmp(order_item.name, ".") == 0)
        {
            for (int i = 0; item[i].name[0] != '\0'; i++)
            {
                printf("[%s %d�� ���:%d]\n", item[i].name, item[i].price, item[i].stock);
            }
            break;
        }

        printf("�ֹ��� ����? ");
        scanf("%d", &order_item.stock);

        if (order_item.stock == 0)
        {
            break;
        }

        cal_product(item, &order_item, order_item.stock);

        if (order_item.price > 0)
        {
            printf("���� �ݾ�: %d  %s ���: %d\n", order_item.price, order_item.name, order_item.stock);
        }
		order_item.name[0] = '\0'; // order_item�� ������ ������ �ϹǷ�, ���� �ֹ��� ���� �ʱ�ȭ
        order_item.price = 0;
		order_item.stock = 0; 
    }

}

int main()
{
    print_product();
    return 0;
}