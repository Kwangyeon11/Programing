/*   파일명: Assignment_02.c
    * 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 연, 월, 일은 정수로 입력받는다.
    * 작성자: 주광연
    * 날짜: 2025.3.21
    * 버전: v1.0
    */

#include <stdio.h>

void student(void);

int main()
{
	student();

	return 0;
}

void student(void)
{
	int num;
	float grade;

	printf("번호? ");
	scanf_s("%d", &num);
	printf("학점? ");
	scanf_s("%f", &grade);

	printf("%d번 학생의 학점은 %f입니다", num, grade );

	return;
}
