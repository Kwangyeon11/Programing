/*   ���ϸ�: Assignment_11.c
	* ����: PA11. ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.3.21
	* ����: v1.0
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pie(void);

int main()
{
	pie();

	return 0;
}

void pie(void)
{
	double PI = 3.14159265;

	printf(" pi = %.2lf\n pi = %.4lf\n pi = %.6lf\n pi = %.8lf\n pi = %e", PI, PI, PI, PI, PI);

	return;
}