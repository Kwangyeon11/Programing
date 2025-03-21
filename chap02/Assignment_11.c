/*   파일명: Assignment_11.c
	* 내용: PA11. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.3.21
	* 버전: v1.0
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pie(void);

int main()
{
	pie();

	return 0;
}

void pie(void)
{
	double PI = 3.14159265;

	printf(" pi = %.2lf\n pi = %.4lf\n pi = %.6lf\n pi = %.8lf\n pi = %e", PI, PI, PI, PI, PI);

	return;
}