/*   ���ϸ�: Assignment10_13.c
     ��  ��: PA13. ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
     �ۼ���: �ֱ���
     ��  ¥: 2025.06.02
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct point{
    
    int x, y;

} POINT;

typedef struct rect {

    POINT left_bottom, right_top;

} RECT;

void print_rect();

void print_rect()
{
   
    RECT lb = { 0 };
    
    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &lb.left_bottom.x, &lb.left_bottom.y);

    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &lb.right_top.x, &lb.right_top.y);

    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n", lb.left_bottom.x, lb.left_bottom.y, lb.right_top.x, lb.right_top.y);

}

int main()
{
    print_rect();

    return 0;
}