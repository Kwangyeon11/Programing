// 25.07.02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void crackdown(void);

void crackdown(void)
{
	int min, distance;
	double v, hours;
	
	
	printf("���� �ܼ� �ҿ� �ð� (��)? ");
	scanf("%d", &min);

	printf("���� �ܼ� ���� �Ÿ� (km)? ");
	scanf("%d", &distance);

	hours = min / 60.0; // �Ǽ� / �Ǽ� or ���� / �Ǽ� �� �Ҽ��� ��� ������ (��->�ð� ���� ��ȯ)
	v = distance / hours;

	printf("��� �ӷ��� %.1f km/h�Դϴ�. ", v);

	if (v >= 100)
	{
		printf("���� �ܼ� �����Դϴ�.");
	} 
	else printf("���� �ܼ� ������ �ƴմϴ�.");

	return;
}

int main()
{
	crackdown();

	return 0;
}