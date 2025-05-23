/*   파일명: Assignment07_10.c
	 내  용: PA10. 3x3 행렬의 합을 구하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.05.23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assigment7_10();
void get_sum();

void get_sum(int x[][3], int y[][3])
{
	
	int sum[3][3] = { 0 };
	
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = x[i][j] + y[i][j];
		}
	}
	printf("x + y 행렬:\n");

	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)
		{
			printf(" %d ", sum[i][j]);
		}
		printf("\n");
	}

}

void assigment7_10(void)
{
	int x[3][3] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	int y[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

	printf("x 행렬:\n");
	
	int i, j;
	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)
		{
			printf(" %d ", x[i][j]);
		}
		printf("\n");
	}
	printf("y 행렬:\n");

	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)
		{
			printf(" %d ", y[i][j]);
		}
		printf("\n");
	}

	get_sum(x, y);

}

int main()
{
	assigment7_10();

	return 0;
}