/*   파일명: Assignment07_6.c
	 내  용: PA06. 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.05.22
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment7_6(void);
void rev(void);

void rev(double arr[])
{
	double reArray[SIZE] = { 0 };
	int i, j;
	for (i = SIZE - 1, j= 0; i >= 0 && j < SIZE; i--, j++)
	{
		reArray[j] = arr[i];
	}

	printf("역순: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1f ", reArray[i]);
	}
	printf("\n");

	return;
}

void assignment7_6(void)
{
	double arr[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	
	printf("배열: ");
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	rev(arr);

	return;
}

int main()
{
	assignment7_6();

	return 0;
}
