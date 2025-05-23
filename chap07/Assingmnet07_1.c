/*   파일명: Assignment07_1.c
	 내  용: PA01. 첫 번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.05.21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10

int assignment7_1(void);

void getCD(int start, int comdiff);

void getCD(int start, int comdiff)
{
	int i;
	int arr[size] = { 0 };

	for (i = 0; i < size; i++)
	{
		arr[i] = ( comdiff * i) + start;
	}

	printf("등차수열: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int assignment7_1(void)
{
	int Fnum;;
	int cdiff;


	printf("첫 번째 항? ");
	scanf(" %d", &Fnum);

	printf("공차? ");
	scanf(" %d", &cdiff);

	getCD(Fnum, cdiff);

	return 0;

}


int main()
{
	assignment7_1();
	
	return 0;
}