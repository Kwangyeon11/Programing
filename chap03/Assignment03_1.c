/*   파일명: Assignment03_1.c
    * 내용: PA01. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오. 
    * 작성자: 주광연
    * 날짜: 2025.4.03
    */

#include <stdio.h>

void assignment01(void);

void assignment01(void)
{
    int a;
    int len;
    int area;
   

    printf("한 변의 길이 ? ");
    scanf_s(" %d", &a);

    len = 4 * a;
    area = a * a;


    printf("정사각형의 넓이: %d\n", area);
    printf("정사각형의 둘레: %d\n", len);
}
int main()
{
    assignment01();

    return 0;
}
