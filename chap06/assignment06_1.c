/*   파일명: Assignment06_1.c
	 내용: PA01. get_perimeter 함수를 이용해서 입력받은 가로, 세로 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날짜: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int a, int b);
int assignment_1(void);


int get_perimeter(int a, int b)
{
	int perimeter = 2 * (a + b);

	return perimeter;
}

int assignment_1(void)
{
	int a, b;
	int meter;

	printf("가로? ");
	scanf(" %d", &a);
	printf("세로? ");
	scanf(" %d", &b);

	meter = get_perimeter(a, b);

	printf("직사각형의 둘레: %d", meter);

	return 0;
}

int main()
{
	assignment_1();
	return 0;
}