/*   파일명: Assignment05_8.c
	* 내용: PA08. 비트 연산을 수행하는 계산기를 프로그램하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.16
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int assignment0508(void);

int assignment0508(void)
{

	int val1, val2;
	char bit;

	printf("비트 연산식? ");
	scanf(" %i %c %i", &val1, &bit, &val2);

	if (bit == '&')
	{
		int compute = val1 & val2;
		printf("%X & %X = %X", val1, val2, compute);
	}
	else if (bit == '|')
	{
		int compute = val1 | val2;
		printf("%X | %X = %X", val1, val2, compute);
	}
	else if (bit == '^')
	{
		int compute = val1 ^ val2;
		printf("%X ^ %X = %X", val1, val2, compute);
	}

	return 0;
}

int main()
{
	assignment0508();

	return 0;
}