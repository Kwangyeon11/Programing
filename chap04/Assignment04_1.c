/*   ���ϸ�: Assignment04_1.c
	* ����: PA01. ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.09
	*/

#include <stdio.h>

int assignment0401(void);
double getEnergy(double mass, double speed);

double getEnergy(double mass, double speed)
{
	return (1.0 / 2.0) * mass * speed * speed;
}

int assignment0401(void)
{

	double mass;
	double speed;
	double E;

	printf("����(kg)? ");
	scanf_s(" %lf", &mass);

	printf("�ӷ�(m/s)? ");
	scanf_s(" %lf", &speed);

	E = getEnergy(mass, speed);

	printf("�������: %.2f J", E);

	return 0;
}
int main()
{
	assignment0401();
	return 0;

}