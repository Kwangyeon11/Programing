/*   파일명: Assignment03_7.c
    * 내용: PA07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.03
    */

#include <stdio.h>


void assignment07(void);

void assignment07(void)
{
    double x, y, z;

    printf("실수? ");
    scanf_s("%lf", &x);

    y = x * x;
    z = x * x * x;

    printf("제곱: %e\n", y);
    printf("세제곱: %e", z);

}
int main()
{
    assignment07();

    return 0;
}