/*   ���ϸ�: Assignment05_9c
	* ����: PA09. �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.16
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

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��] \n");

	printf("�ܹ��� ����? ");
	scanf(" %d", &burgerC);
	
	printf("����Ƣ�� ����? ");
	scanf(" %d", &potatoC);
	
	printf("�ݶ� ����? ");
	scanf(" %d", &colaC);

	setC = burgerC;
	if (potatoC < setC) setC = potatoC;
	if (colaC < setC) setC = colaC;

	burgerC -= setC;
	potatoC -= setC;
	colaC -= setC;

	totalPrice = (setC * setP) + (burgerC * burgerP) + (potatoC * potatoP) + (colaC * colaP);


	printf("��ǰ��\t\t�ܰ�\t����\t�ݾ�\n");
	if (setC > 0)
	{
		printf("��Ʈ\t\t%d\t%d\t%d\n", setP, setC, (setP * setC));
	}
	if (burgerC > 0)
	{
		printf("�ܹ���\t\t%d\t%d\t%d\n", burgerP, burgerC, (burgerP * burgerC));
	}
	if (potatoC > 0)
	{
		printf("����Ƣ��\t%d\t%d\t%d\n", potatoP, potatoC, (potatoP * potatoC));
	}
	if (colaC > 0)
	{
		printf("�ݶ�\t%d\t%d\t%d\n", colaP, colaC, (colaP * colaC));
	}

	printf("-------------------------------------\n");
	printf("�հ�\t\t\t\t%d\n", totalPrice);

	return 0;
}

int main()
{
	assignment0509();

	return 0;
}