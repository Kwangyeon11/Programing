/*   ���ϸ�: Assignment06_3.c
	 ����: PA03. distance �Լ��� �̿��ؼ� �Է¹��� ���������κ��� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);
int assignment_3(void);

double distance(int x1, int y1, int x2, int y2)
{
	double distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	double result = sqrt(distance);
	
	return result;
}

int assignment_3(void)
{
	int x1, y1, x2, y2;
	double dis;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);

	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	dis = distance(x1, y1, x2, y2);
	printf("(%d, %d)~(%d, %d) ������ ����: %lf", x1, y1, x2, y2, dis);

	return 0;

}

int main()
{
	assignment_3();
	return 0;
}
