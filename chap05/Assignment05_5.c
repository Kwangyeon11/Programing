/*   ���ϸ�: Assignment05_5.c
	* ����: PA05. �µ��� �Է¹޾� ���� �µ��� ��ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.16
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double	Ctemper(double tem);
double	Ftemper(double tem);
int assignment0505(void);


double	Ctemper(double tem)
{
	double C;
	C = (tem - 32.0) * (5.0 / 9.0);
	return C;
}
double	Ftemper(double tem)
{
	double F;
	F = (tem * (9.0 / 5.0)) + 32.0;
	return F;
}

int assignment0505(void)
{
	
	double tem;
	char select;

	printf("�µ�? ");
	scanf("%lf %c", &tem, &select);

	if (select == 'C')
	{
	
		printf("%.2f C ==> %.2f F", tem, Ftemper(tem));
	}
	else if (select == 'F')
	{
		
		printf("%.2f F ==> %.2f C", tem, Ctemper(tem));
	} 

	return 0;
}

int main()
{
	assignment0505();

	return 0;
}