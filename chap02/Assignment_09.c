/*   ���ϸ�: Assignment_09.c
	* ����: PA09. 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.3.21
	* ����: v1.0
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hexa(void);

int main()
{
	hexa();

	return 0;
}

void hexa(void)
{
	int num;

	printf("16���� ����? ");
	scanf(" %x", &num);

	printf("16���� %x�� 10������ %d�Դϴ�. \n", num, num);

	return;
}