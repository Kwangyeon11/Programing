/*   파일명: Assignment10_13.c
     내  용: PA13. 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.
     작성자: 주광연
     날  짜: 2025.06.02
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
    
    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &lb.left_bottom.x, &lb.left_bottom.y);

    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &lb.right_top.x, &lb.right_top.y);

    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n", lb.left_bottom.x, lb.left_bottom.y, lb.right_top.x, lb.right_top.y);

}

int main()
{
    print_rect();

    return 0;
}