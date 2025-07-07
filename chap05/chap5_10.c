// 25.07.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void cal_fee(void);
int truncate_fee(int fee, int index);

int truncate_fee(int fee, int index) // n�ڸ� ���� ���� �Լ�
{
	int factor = 1;
	for (int i = 0; i < index; ++i)
		factor *= 10;
	
	return (fee / factor) * factor; // �ٽ� �ڵ�
}


void cal_fee(void)
{
	int fee;
	int index;
	

	printf("�ݾ�? ");
	scanf(" %d", &fee);

	printf("������� (10�� ������)? ");
	scanf(" %d", &index);

	double result = pow(10, index); // x�� n������ ���ϱ� ���� �Լ� pow(x, n)
	
	printf("�ݾ�(%.0f�� �̸� ����): %d", result, truncate_fee(fee, index));

	return;

}

int main()
{
	cal_fee();

	return 0;
}