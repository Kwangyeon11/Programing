/*   파일명: Assignment05_17c
	* 내용: PA17. 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.16
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int assignment0517(void);

int assignment0517(void)
{

	int time;
	
	const int firstfee = 2000;
	const int maxfee =25000;
	int subfee;
	int totalfee;

	printf("주차 시간(분)? ");
	scanf(" %d", &time);

	if (time <= 30) 
	{
		printf("주차 요금: %d원", firstfee);
	}
	else
	{
		subfee = (int)ceil((time - 30) / 10.0) * 1000; // 2.2 -> 3.0 반올림 계산
		totalfee = firstfee + subfee;

		if (totalfee > maxfee)
		{
			totalfee = maxfee;
		}
		printf("주차 요금: %d원", totalfee);
	}
	
	return 0;
}

int main()
{
	assignment0517();

	return 0;
}