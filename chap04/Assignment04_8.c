/*   파일명: Assignment04_8.c
	* 내용: PA08. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.09
	*/

#include <stdio.h>

int assignment0408(void);
double v(int radius);

double v(int radius)
{
	const double PI = 3.141592;

	double volume = (4.0 / 3.0) * PI * radius * radius * radius;

	return volume;
}

int assignment0408(void)
{

	int radius;
	double a;


	printf("반지름의 길이? ");
	scanf_s(" %d", &radius);

	a = v(radius);

	printf("구의 부피: %lf", a);

	return 0;

}
int main()
{
	assignment0408();
	return 0;

}