// 25. 07. 08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_grade()
{
	int grade[5][4] = { { 28, 28, 26, 9}, { 30, 27, 30, 10 }, { 25, 26, 24, 8 }, 
		{ 18, 22, 22, 5 }, { 24, 25, 30, 10 } };
	double avr[4] = { 0.0 };

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		printf(" 학 생 %3d번:	", i+1);
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", grade[i][j]);
			sum += grade[i][j];
		}
		printf(" ==> %3d\n", sum);
	}
	
	printf(" 항목별 평균:   ");
	for (int i = 0; i < 4; i++)
	{
		double sum_b = 0.0;
		for (int j = 0; j < 5; j++)
		{
			sum_b += grade[j][i];
		}
		avr[i] = sum_b / 5.0;
		printf("%.2f ", avr[i]);
	}
}

int main()
{
	print_grade();
	return 0;
}
