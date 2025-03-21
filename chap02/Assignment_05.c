/*   파일명: Assignment_05.c
	* 내용: PA05. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.
	* 작성자: 주광연
	* 날짜: 2025.3.21
	* 버전: v1.0
	*/

#include <stdio.h>

void weight(void);

int main()
{
	weight();

	return 0;
}

void weight(void)
{
	float mass;
		
	printf("몸무게? ");
	scanf_s("%f", &mass);

	printf("입력한 몸무게는 %.2fKG입니다.", mass);

	return;
}