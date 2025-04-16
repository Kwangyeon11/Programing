/*   파일명: Assignment05_4.c
	* 내용: PA04. 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.15
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0504(void);

int assignment0504(void)
{

	int year;
	
	printf("연도? ");
	scanf(" %d", &year);

	if ((year % 4 == 0) && !(year % 100 == 0))
	{
		printf("%d년은 윤년입니다", year);
	}
	else if ((year % 4 == 0) && (year % 100 == 0) && !(year % 400 == 0))
	{
		printf("윤년이 아닙니다");
	}
	else if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
	{
		printf("%d년은 윤년입니다", year);
	}
	

	return 0;
}

int main()
{
	assignment0504();

	return 0;
}