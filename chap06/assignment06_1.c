/*   ���ϸ�: Assignment06_1.c
	 ����: PA01. get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ���� ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int a, int b);
int assignment_1(void);


int get_perimeter(int a, int b)
{
	int perimeter = 2 * (a + b);

	return perimeter;
}

int assignment_1(void)
{
	int a, b;
	int meter;

	printf("����? ");
	scanf(" %d", &a);
	printf("����? ");
	scanf(" %d", &b);

	meter = get_perimeter(a, b);

	printf("���簢���� �ѷ�: %d", meter);

	return 0;
}

int main()
{
	assignment_1();
	return 0;
}