/*   파일명: Assignment05_3.c
	* 내용: PA03. 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.15
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0503(void);

int assignment0503(void)
{

	int money;


	printf("거스름돈? ");
	scanf(" %d", &money);

	int count;
	
	printf("거스름돈 (10원미만 절사): %d \n", money);

	if (money >= 50000)
	{
		count = money / 50000;
		printf("50000원  %d장\n", count);
		money = money % 50000;
	}
	else 
	{
		printf("50000원  0장");
	}
	
	if (money >= 10000)
	{
		count = money / 10000;
		printf("10000원  %d장\n", count);
		money = money % 10000;
	}
	else
	{
		printf("10000원  0장");
	}
	
	if (money >= 5000)
	{
		count = money / 5000;
		printf(" 5000원  %d장\n", count);
		money = money % 5000;
	}
	else
	{
		printf(" 5000원  0장");
	}
	
	if (money >= 1000)
	{
		count = money / 1000;
		printf(" 1000원  %d장\n", count);
		money = money % 1000;
	}
	else
	{
		printf(" 1000원  0장");
	}
	
	if (money >= 100)
	{
		count = money / 100;
		printf("  100원  %d개\n", count);
		money = money % 100;
	}
	else
	{
		printf("  100원  0개");
	}
	
	if (money >= 10)
	{
		count = money / 10;
		printf("   10원  %d개\n", count);
		money = money % 10;
	}
	else
	{
		printf("   10원  0개");
	}

	return 0;
}

int main()
{
	assignment0503();

	return 0;
}