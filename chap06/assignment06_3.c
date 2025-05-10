/*   파일명: Assignment06_3.c
	 내용: PA03. distance 함수를 이용해서 입력받은 시작점으로부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날짜: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);
int assignment_3(void);

double distance(int x1, int y1, int x2, int y2)
{
	double distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	double result = sqrt(distance);
	
	return result;
}

int assignment_3(void)
{
	int x1, y1, x2, y2;
	double dis;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);

	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	dis = distance(x1, y1, x2, y2);
	printf("(%d, %d)~(%d, %d) 직선의 길이: %lf", x1, y1, x2, y2, dis);

	return 0;

}

int main()
{
	assignment_3();
	return 0;
}
