/*   ���ϸ�: Assignment05_17c
	* ����: PA17. ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.16
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int assignment0517(void);

int assignment0517(void)
{

	int time;
	
	const int firstfee = 2000;
	const int maxfee =25000;
	int subfee;
	int totalfee;

	printf("���� �ð�(��)? ");
	scanf(" %d", &time);

	if (time <= 30) 
	{
		printf("���� ���: %d��", firstfee);
	}
	else
	{
		subfee = (int)ceil((time - 30) / 10.0) * 1000; // 2.2 -> 3.0 �ݿø� ���
		totalfee = firstfee + subfee;

		if (totalfee > maxfee)
		{
			totalfee = maxfee;
		}
		printf("���� ���: %d��", totalfee);
	}
	
	return 0;
}

int main()
{
	assignment0517();

	return 0;
}