/*   ���ϸ�: Assignment05_3.c
	* ����: PA03. �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.15
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0503(void);

int assignment0503(void)
{

	int money;


	printf("�Ž�����? ");
	scanf(" %d", &money);

	int count;
	
	printf("�Ž����� (10���̸� ����): %d \n", money);

	if (money >= 50000)
	{
		count = money / 50000;
		printf("50000��  %d��\n", count);
		money = money % 50000;
	}
	else 
	{
		printf("50000��  0��");
	}
	
	if (money >= 10000)
	{
		count = money / 10000;
		printf("10000��  %d��\n", count);
		money = money % 10000;
	}
	else
	{
		printf("10000��  0��");
	}
	
	if (money >= 5000)
	{
		count = money / 5000;
		printf(" 5000��  %d��\n", count);
		money = money % 5000;
	}
	else
	{
		printf(" 5000��  0��");
	}
	
	if (money >= 1000)
	{
		count = money / 1000;
		printf(" 1000��  %d��\n", count);
		money = money % 1000;
	}
	else
	{
		printf(" 1000��  0��");
	}
	
	if (money >= 100)
	{
		count = money / 100;
		printf("  100��  %d��\n", count);
		money = money % 100;
	}
	else
	{
		printf("  100��  0��");
	}
	
	if (money >= 10)
	{
		count = money / 10;
		printf("   10��  %d��\n", count);
		money = money % 10;
	}
	else
	{
		printf("   10��  0��");
	}

	return 0;
}

int main()
{
	assignment0503();

	return 0;
}