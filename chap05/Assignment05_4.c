/*   ���ϸ�: Assignment05_4.c
	* ����: PA04. ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.15
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0504(void);

int assignment0504(void)
{

	int year;
	
	printf("����? ");
	scanf(" %d", &year);

	if ((year % 4 == 0) && !(year % 100 == 0))
	{
		printf("%d���� �����Դϴ�", year);
	}
	else if ((year % 4 == 0) && (year % 100 == 0) && !(year % 400 == 0))
	{
		printf("������ �ƴմϴ�");
	}
	else if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
	{
		printf("%d���� �����Դϴ�", year);
	}
	

	return 0;
}

int main()
{
	assignment0504();

	return 0;
}