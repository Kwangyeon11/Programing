/*   파일명: Assignment05_5.c
	* 내용: PA05. 온도를 입력받아 섭씨 온도는 ㅇ화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.16
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

	printf("온도? ");
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