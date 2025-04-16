/*   파일명: Assignment05_1.c
	* 내용: PA01. 점의 좌표(x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
	* 작성자: 주광연
	* 날짜: 2025.4.15
	*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0501(void);

int assignment0501(void)
{

	int x, y;
	int left, top;
	int right, bottom;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf(" %d %d", &left, &top);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf(" %d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf(" %d %d", &x, &y);

	if ((x >= left && x <= right) && (y >= top && y <= bottom))
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	} 
	else if(x, y < 0)
	{
		printf("잘못 입력하셨습니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 외의 점입니다.");
	}
	
	return 0;
}

int main()
{
	assignment0501();

	return 0;
}
