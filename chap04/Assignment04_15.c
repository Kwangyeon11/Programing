/*   파일명: Assignment04_15.c
    * 내용: PA15. 원-달러 매매기준율과 환전우대율을 입력받아 달러를 살 때 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.08
    */

#include <stdio.h>


int assignment0415(void);
double exchangeRate(int deal, int prefer);

double exchangeRate(int deal, int prefer)
{
    const double BANK = 1.75;
    return 0.01 * deal * BANK * (1 - 0.01 * prefer);
}
int assignment0415(void)
{

    int deal, prefer;
    double rate, Dollar, won;


    printf("원/달러 매매기준율?  ");
    scanf_s(" %d", &deal);

    printf("환전우대율(0~100%)? ");
    scanf_s(" %d", &prefer);

    rate = deal + exchangeRate(deal, prefer);

    printf("달러 살 때 환율은 %lf입니다.\n", rate );
    
    printf("구입할 달러(USD)? ");
    scanf_s(" %lf", &Dollar);

    won = Dollar * rate;

    printf("USD %.2f 살 때 ==> KRW %.2f ", Dollar, won);

        
    return 0;

}
int main()
{
    
    assignment0415();
    return 0;

}