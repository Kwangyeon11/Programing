/*   ���ϸ�: Assignment_10.c
	* ����: PA10. ������ 8����, 10����, 16���� �� �ϳ��� �Է¹޾� 8����, 10����, 16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.3.21
	* ����: v1.0
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convert(void);

int main()
{
	convert();

	return 0;
}

void convert(void)
{
	int num;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf(" %i", &num);

	printf(" 8����: %03o \n10����: %d \n16����: %#x \n", num, num, num);

	return;
}