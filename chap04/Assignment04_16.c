/*   파일명: Assignment04_16.c
    * 내용: PA16. 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.08
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


    printf("RGB 트루컬러: %06X\n", color);

    return 0;

}
   
int main()
{
    assignment0416();
    return 0;

}