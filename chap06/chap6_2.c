// 25.07.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_area_of_square(void)
{
	double len;
	double square;

	printf("�� ���� ����? ");
	scanf("%lf", &len);

	square = (len * len); // �Լ��� ���� �ۼ��ؾ������� ����

	printf("���簢���� ����: %.2f\n", square);

	return;
}

int main()
{
	get_area_of_square();

	return 0;
}
