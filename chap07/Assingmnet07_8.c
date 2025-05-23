/*   파일명: Assignment07_8.c
	 내  용: PA08. 상품 가격이 저장된 정수형 배열에 대하여 할인율을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.05.22
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void assignment7_8(void);
void downitem(void);

void downitem(int item[], int discount)
{
	int item2[SIZE] = { 0 };
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		item2[i] = (int)item[i] * ((100.0 - discount) / 100.0);
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("가격: %7d --> 할인가:%7d\n", item[i], item2[i]);
	}
	return;
}


void assignment7_8(void)
{
	int item[SIZE] = { 0 };
	int discount = 0;

	printf("상품가 5개를 입력하세요: \n");
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		scanf(" %d", &item[i]);
	}
	
	printf("할인율(%%)? ");
	scanf(" %d", &discount);

	downitem(item, discount);

	return;
}

int main()
{
	assignment7_8();

	return 0;
}