// 25.07.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_space(void);

void get_space(void)
{
	double area;
	char ch;
	
	printf("넓이? ");
	scanf("%lf %c", &area, &ch);


	if (ch == 'm')
	{
		printf("%.2f 제곱미터 == %.2f 평\n", area, area * 0.3025);

	}
	else if (ch == 'p')
	{
		printf("%.2f 평 == %.2f 제곱미터\n", area, area * 3.305785);
	}
	else
	{
		printf("잘못된 형식의 입력입니다.\n");
	}

	return;
}

int main()
{
	get_space();

	return 0;
}