/*   ���ϸ�: Assignment_07.c
	* ����: PA07. Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.3.21
	* ����: v1.0
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void coffee(void);

int main()
{
	coffee();

	return 0;
}

void coffee(void)
{
	char size;
	int quantity = 0;

	printf("Ŀ�� ������(S, T, G)�� ���� ����? ");
	scanf(" %c %d", &size, &quantity);

	printf("%c ������ %d���� �ֹ��մϴ�. \n", size, quantity);

	return;
}