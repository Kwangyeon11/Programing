/*   ���ϸ�: Assignment10_08.c
     ��  ��: PA08. PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
     �ۼ���: �ֱ���
     ��  ¥: 2025.06.02
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

    printf("��ǰ��? ");
    scanf("%s", &s1.name);
    
    printf("����? ");
    scanf("%d", &s1.price);
    
    printf("���? ");
    scanf("%d", &s1.stock);

    printf("[%s %d�� ���:%d]\n", s1.name, s1.price, s1.stock);

}

int main()
{
    assignment_8();

    return 0;
}