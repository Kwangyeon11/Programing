/*   파일명: Assignment06_5.c
	 내용: PA05. is_even, is_odd 두 함수를 이용해서 0이 입력될 때까지 입력된 정수들에 대하여 짝수, 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날짜: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int num);
int is_odd(int num);
int assignment_5(void);

int is_even(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
}
int is_odd(int num)
{
	if (num % 2 == 1)
	{
		return 1;
	}
}

int assignment_5(void)
{
	int num;
	int count1 = 0;
	int count2 = 0;
	
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	for ( ; ; )
	{
		scanf("%d", &num);
		
		if (num != 0)
		{
			if (num % 2 == 0)
			{
				count1 += is_even(num);
			}
			if (num % 2 == 1)
			{
				count2 += is_odd(num);
			}	
		}
		else if (num == 0)
			break;
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", count1, count2);
	
	return 0;
}

int main()
{
	assignment_5();
	return 0;
}