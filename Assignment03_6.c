/*   파일명: Assignment03_6.c
    * 내용: PA06. 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.03
    */

#include <stdio.h>


void assignment06(void);

void assignment06(void)
{
    double area;
    double ext;
    const double M = 0.3025;

    printf("아파트의 면적(제곱미터)? ");
    scanf_s("%lf", &area);

    ext = area * M;
    printf("%.2f 제곱미터 = %.2f 평", area, ext);

}
int main()
{
    assignment06();

    return 0;
}