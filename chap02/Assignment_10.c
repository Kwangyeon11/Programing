/*   파일명: Assignment_10.c
	* 내용: PA10. 정수를 8진수, 10진수, 16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.3.21
	* 버전: v1.0
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convert(void);

int main()
{
	convert();

	return 0;
}

void convert(void)
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	printf("정수? ");
	scanf(" %i", &num);

	printf(" 8진수: %03o \n10진수: %d \n16진수: %#x \n", num, num, num);

	return;
}