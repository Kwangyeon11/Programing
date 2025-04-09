/*   파일명: Assignment04_1.c
	* 내용: PA01. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.09
	*/

#include <stdio.h>

int assignment0401(void);
double getEnergy(double mass, double speed);

double getEnergy(double mass, double speed)
{
	return (1.0 / 2.0) * mass * speed * speed;
}

int assignment0401(void)
{

	double mass;
	double speed;
	double E;

	printf("질량(kg)? ");
	scanf_s(" %lf", &mass);

	printf("속력(m/s)? ");
	scanf_s(" %lf", &speed);

	E = getEnergy(mass, speed);

	printf("운동에너지: %.2f J", E);

	return 0;
}
int main()
{
	assignment0401();
	return 0;

}