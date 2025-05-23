/*   파일명: Assignment07_9.c
	 내  용: PA09. 1~12월의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.05.23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

void assignment7_9(void);
void draw_graph(int arr[], char ch);

void draw_graph(int fee, char ch) // 인자가 변수 값, 매개변수도 변수로 설정
{
	int i;
	int count = fee / 2000.0;
	for (i = 0; i < count; i++)
	{
			printf("%c", ch);
	}
}

void assignment7_9(void)
{
	int yearfee[SIZE] = { 0 };
	srand(time(NULL));

	int i;
	for (i = 0; i < SIZE; i++)
	{
		yearfee[i] = rand() % (100000 - 10000 + 1) + 10000;
	}
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d월 %5d:", i + 1, yearfee[i]);
		draw_graph(yearfee[i], '*'); // 배열 원소르 보냄 = 변수 값을 보냄
		printf("\n");
	}
}

int main()
{
	assignment7_9();

	return 0;
}
