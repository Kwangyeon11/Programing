/*   ���ϸ�: Assignment05_1.c
	* ����: PA01. ���� ��ǥ(x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.15
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0501(void);

int assignment0501(void)
{

	int x, y;
	int left, top;
	int right, bottom;

	printf("���� ������ �»���� (left, top)? ");
	scanf(" %d %d", &left, &top);

	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf(" %d %d", &right, &bottom);

	printf("���� ��ǥ (x, y)? ");
	scanf(" %d %d", &x, &y);

	if ((x >= left && x <= right) && (y >= top && y <= bottom))
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	} 
	else if(x, y < 0)
	{
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	
	return 0;
}

int main()
{
	assignment0501();

	return 0;
}
