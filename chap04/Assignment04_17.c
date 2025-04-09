/*   파일명: Assignment04_17.c
	* 내용: PA17. 7, 15, 23, 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.09
	*/

#include <stdio.h>

int assignment0417(void);

int assignment0417(void)
{

	unsigned int bit = 1;


	int a = bit << 7;
	printf("7번 비트만 1인 값: %08x %d\n", a, a);

	int b = bit << 15;

	printf("15번 비트만 1인 값: %08x %d\n", b, b);

	int c = bit << 23;

	printf("23번 비트만 1인 값: %08x %d\n", c, c);

	int d = bit << 31;

	printf("31번 비트만 1인 값: %08x %d\n", d, d);


	return 0;

}
int main()
{
	assignment0417();

	return 0;

}