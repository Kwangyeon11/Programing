// 25. 08. 08 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product {
    char name[20];
    int price;
    int quantity;
} PRODUCT;

void print_receipt()
{
    FILE* fp = NULL;
    PRODUCT item[3] = {
        {"아메리카노", 4000},
        {"카페라떼", 4500},
        {"플랫화이트", 5000}
    };
    int sumprice = 0;

    fp = fopen("receipt.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    }

    // UTF-8 BOM 추가 (한글 깨짐 방지) << 효과 없음
    fprintf(fp, "\xEF\xBB\xBF");

    printf("[메뉴] %s:%d, %s:%d, %s:%d\n",
        item[0].name, item[0].price,
        item[1].name, item[1].price,
        item[2].name, item[2].price);

    for (int i = 0; i < 3; i++) {
        printf("%s 수량? ", item[i].name);
        scanf("%d", &item[i].quantity);
    }

    for (int i = 0; i < 3; i++) {
        sumprice += item[i].price * item[i].quantity;
    }
    printf("결제 금액: %d\n", sumprice);

    fprintf(fp, "%-15s%10s%10s%10s\n", "제품명", "단가", "수량", "금액");
    for (int i = 0; i < 50; i++) fputc('-', fp);
    fprintf(fp, "\n");

    for (int i = 0; i < 3; i++) {
        if (item[i].quantity == 0) continue;
        fprintf(fp, "%-15s%10d%10d%10d\n",
            item[i].name,
            item[i].price,
            item[i].quantity,
            item[i].price * item[i].quantity);
    }

    for (int i = 0; i < 50; i++) fputc('-', fp);
    fprintf(fp, "\n합계:%41d\n", sumprice);

    fclose(fp);
}

int main()
{
    print_receipt();
    return 0;
}
