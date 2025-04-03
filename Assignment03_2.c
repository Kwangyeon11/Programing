/*   파일명: Assignment03_2.c
    * 내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.03
    */

#include <stdio.h>

void assignment01(void);

void assignment01(void)
{
    int x;
    int y;
    int area;
    int len;

    printf("가로의 길이 ? ");
    scanf_s(" %d", &x);

    printf("세로의 길이 ? ");
    scanf_s(" %d", &y);
    
    area = x * y;
    len = (2 * x) + (2 * y);

    printf("직사각형의 넓이: %d\n", area);
    printf("직사각형의 둘레: %d\n", len);
}
int main()
{
    assignment01();

    return 0;
}
