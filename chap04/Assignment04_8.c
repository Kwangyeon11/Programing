/*   ���ϸ�: Assignment04_8.c
	* ����: PA08. �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.09
	*/

#include <stdio.h>

int assignment0408(void);
double v(int radius);

double v(int radius)
{
	const double PI = 3.141592;

	double volume = (4.0 / 3.0) * PI * radius * radius * radius;

	return volume;
}

int assignment0408(void)
{

	int radius;
	double a;


	printf("�������� ����? ");
	scanf_s(" %d", &radius);

	a = v(radius);

	printf("���� ����: %lf", a);

	return 0;

}
int main()
{
	assignment0408();
	return 0;

}