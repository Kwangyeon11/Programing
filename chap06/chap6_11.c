// 25.07.04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double cal_number(double num1, char ch, double num2);

double cal_number(double num1, char ch, double num2)
{
	double sum = 0.0;
	
	switch (ch) {
	case '+':
		sum = num1 + num2;
		return sum;
		break;

	case '-':
		sum = num1 - num2;
		return sum;
		break;
	
	case '*':
		sum = num1 * num2;
		return sum;
		break;

	case '/':
		sum = num1 / num2;
		return sum;
		break;
	
	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}
}

void print_number(void)
{
	double num1, num2;
	char ch;
	double sum = 0;

	while (1)
	{
		printf("���� (0 0 0 �Է� �� ����)? ");
		scanf("%lf %c %lf", &num1, &ch, &num2);

		if (num1 == 0 && ch == '0' && num2 == 0) break;

		sum = cal_number(num1, ch, num2);

		printf("%lf\n", sum);		
	}

	return;
}

int main()
{
	print_number();

	return 0;
}