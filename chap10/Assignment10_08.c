/*   파일명: Assignment10_08.c
     내  용: PA08. PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
     작성자: 주광연
     날  짜: 2025.06.02
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct product {

    char name[20];
    int price;
    int stock;

} PRODUCT;

void assignment_8(void);

void assignment_8(void)
{

    PRODUCT s1;

    printf("제품명? ");
    scanf("%s", &s1.name);
    
    printf("가격? ");
    scanf("%d", &s1.price);
    
    printf("재고? ");
    scanf("%d", &s1.stock);

    printf("[%s %d원 재고:%d]\n", s1.name, s1.price, s1.stock);

}

int main()
{
    assignment_8();

    return 0;
}