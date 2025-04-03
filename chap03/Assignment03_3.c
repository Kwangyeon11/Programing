/*   파일명: Assignment03_3.c
    * 내용: PA03. 질령과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.02
    */

#include <stdio.h>

double calcPositionEnergy(int weight, int height);
void assignment0303(void);


double calcPositionEnergy(int weight, int height)
{
    const double g = 9.8;
    return weight * g * height;
}

void assignment0303(void)
{
    int weight, height;
    double ga;

    printf("질량(kg)? ");
    scanf_s(" %d", &weight);

    printf("높이(m)? ");
    scanf_s(" %d", &height);

    ga = calcPositionEnergy(weight, height);

    printf("위치 에너지: %f J\n", ga);
}
int main()
{
    assignment0303();

    return 0;
}
