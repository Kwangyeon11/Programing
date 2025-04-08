/*   파일명: Assignment04_2.c
    * 내용: PA02. 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.08
    */

#include <stdio.h>


int assignment0402(void);
double celsius(double f);

double celsius(double f)
{
    return (f - 32.0) * (5.0 / 9.0);
}
int assignment0402(void)
{

    double f = 0;

    printf("화씨온도? ");
    scanf_s(" %lf", &f);
    printf("%.2f F = %.2f C", f, celsius(f));

    return 0;
        
}
int main()
{
    assignment0402();
    return 0;

}