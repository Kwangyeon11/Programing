/*   파일명: Assignment05_9c
	* 내용: PA09. 햄버거 가게의 계산서 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.16
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int assignment0509(void);

int assignment0509(void)
{

	int burgerP = 4000; 
	int potatoP = 2000;
	int colaP = 1500;
	int setP = 6500;
	int burgerC, potatoC, colaC, setC;
	int totalPrice;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원] \n");

	printf("햄버거 개수? ");
	scanf(" %d", &burgerC);
	
	printf("감자튀김 개수? ");
	scanf(" %d", &potatoC);
	
	printf("콜라 개수? ");
	scanf(" %d", &colaC);

	setC = burgerC;
	if (potatoC < setC) setC = potatoC;
	if (colaC < setC) setC = colaC;

	burgerC -= setC;
	potatoC -= setC;
	colaC -= setC;

	totalPrice = (setC * setP) + (burgerC * burgerP) + (potatoC * potatoP) + (colaC * colaP);


	printf("상품명\t\t단가\t수량\t금액\n");
	if (setC > 0)
	{
		printf("세트\t\t%d\t%d\t%d\n", setP, setC, (setP * setC));
	}
	if (burgerC > 0)
	{
		printf("햄버거\t\t%d\t%d\t%d\n", burgerP, burgerC, (burgerP * burgerC));
	}
	if (potatoC > 0)
	{
		printf("감자튀김\t%d\t%d\t%d\n", potatoP, potatoC, (potatoP * potatoC));
	}
	if (colaC > 0)
	{
		printf("콜라\t%d\t%d\t%d\n", colaP, colaC, (colaP * colaC));
	}

	printf("-------------------------------------\n");
	printf("합계\t\t\t\t%d\n", totalPrice);

	return 0;
}

int main()
{
	assignment0509();

	return 0;
}