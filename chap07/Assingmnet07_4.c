/*   파일명: Assignment07_4.c
	 내  용: PA04. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.05.21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void assignment7_4(void);

void getMAX(void);
void getMIN(void);

void getMAX(int arr[], int size)
{
	int i;
	int index;
	int max = arr[0];

	for (i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
		else continue;
	}
	printf("최댓값: 인덱스=%d, 값=%d", index, max);
	printf("\n");

	return;
}
void getMIN(int arr[], int size)
{
	int i;
	int index;
	int min = arr[0];

	for (i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
		else continue;
	
	}
	printf("최솟값: 인덱스=%d, 값=%d", index, min);
	printf("\n");

	return;
}

void assignment7_4(void)
{
	int arr[] = { 23, 45, 62,12,99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int i;
	printf("배열: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	getMAX(arr, size);
	getMIN(arr, size);
	
	return;
	
}

int main()
{
	assignment7_4();

	return 0;
}