/*   ���ϸ�: Assignment04_16.c
    * ����: PA16. 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.08
    */

#include <stdio.h>
#define MAX_COLOR_BITS 0XFF

int assignment0416(void);

int assignment0416(void)
{
    
    int a, b, c;
    unsigned int color;


    printf("red? ");
    scanf_s(" %d", &a);

    printf("green? ");
    scanf_s(" %d", &b);

    printf("blue? ");
    scanf_s(" %d", &c);

    a &= MAX_COLOR_BITS;
    b &= MAX_COLOR_BITS;
    c &= MAX_COLOR_BITS;

    color = (c << 16) | (b << 8) | a;


    printf("RGB Ʈ���÷�: %06X\n", color);

    return 0;

}
   
int main()
{
    assignment0416();
    return 0;

}