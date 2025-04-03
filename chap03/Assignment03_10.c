/*   파일명: Assignment03_10.c
    * 내용: PA10. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.03
    */

#include <stdio.h>


void assignment10(void);

void assignment10(void)
{
    double dollar;
    double exchange;
    double won;

    printf("USD? ");
    scanf_s("%lf", &dollar);

    printf("원/달러 환율? ");
    scanf_s("%lf", &exchange);

    won = dollar * exchange;
    printf("KRW %.2f = KRW %.2f", dollar, won);

}
int main()
{
    assignment10();

    return 0;
}