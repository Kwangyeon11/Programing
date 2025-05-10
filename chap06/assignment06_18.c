/*   파일명: Assignment06_18.c
	 내용: PA18. 0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날짜: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int num1);
void assignment_18(void);

void divisors(int num1)
{
	int i;
	int count = 0;

	printf("%d의 약수: ", num1);
	for (i = 1; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			count += 1;
			printf("%d ", i);
		}
		else continue;
	}
	printf("=> 총 %d개\n", count);

	return;
}

void assignment_18(void)
{
	srand(time(NULL));

	int i;
	for (i = 0; i < 3; i++)
	{
		int num1 = rand() % 1000;

		divisors(num1);
	
	} return;
	
}
int main()
{
	assignment_18();
	return 0;
}

