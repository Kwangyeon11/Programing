// 25.07.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_space(void);

void get_space(void)
{
	double area;
	char ch;
	
	printf("����? ");
	scanf("%lf %c", &area, &ch);


	if (ch == 'm')
	{
		printf("%.2f �������� == %.2f ��\n", area, area * 0.3025);

	}
	else if (ch == 'p')
	{
		printf("%.2f �� == %.2f ��������\n", area, area * 3.305785);
	}
	else
	{
		printf("�߸��� ������ �Է��Դϴ�.\n");
	}

	return;
}

int main()
{
	get_space();

	return 0;
}