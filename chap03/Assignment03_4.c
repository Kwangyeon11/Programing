/*   파일명: Assignment03_4.c
    * 내용: PA04. 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.03
    */

#include <stdio.h>

double calcEnergy(int power, int shift);
void assignment04(void);


double calcEnergy(int power, int shift)
{
    return power * shift;
}

void assignment04(void)
{
    int power, shift;
    double work;

    printf("힘(N)? ");
    scanf_s(" %d", &power);

    printf("이동거리(m)? ");
    scanf_s(" %d", &shift);

    work = calcEnergy(power, shift);

    printf("일의 양: %.2f J\n", work);
}
int main()
{
    assignment04();

    return 0;
}
