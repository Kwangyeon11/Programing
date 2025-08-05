// 25. 07. 30

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

typedef struct rect
{
	int x1; //좌
	int y1; //하
	int x2; //우
	int y2; //상
} RECT;

typedef struct point
{
	int x;
	int y;
} POINT;

void nomalize_rect(RECT* p)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (p[i].x1 > p[i].x2)
		{
			int temp = p[i].x1;
			p[i].x1 = p[i].x2;
			p[i].x2 = temp;
		}
		if (p[i].y1 > p[i].y2)
		{
			int temp = p[i].y1;
			p[i].y1 = p[i].y2;
			p[i].y2 = temp;
		}
	}
}

void center_rect(RECT* pr, POINT* pc)
{
	for (int i = 0; i < SIZE; i++)
	{
		pc[i].x = (pr[i].x1 + pr[i].x2) / 2;
		pc[i].y = (pr[i].y1 + pr[i].y2) / 2;
	}
}

void print_rect()
{
	RECT rects[SIZE] = { 0 };
	POINT center[SIZE] = { 0 };

	srand((unsigned int)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		rects[i].x1 = rand() % 100;
		rects[i].y1 = rand() % 100;
		rects[i].x2 = rand() % 100;
		rects[i].y2 = rand() % 100;
	}

	nomalize_rect(rects);

	center_rect(rects, center);

	for (int i = 0; i < SIZE; i++)
	{
		printf("[RECT 좌하단점:(%d, %d) 우상단점: (%d, %d)]", i + 1, rects[i].x1, rects[i].y1, rects[i].x2, rects[i].y2);
		printf("\t중심점:(%d, %d)\n", center[i].x, center[i].y);
	}

}

int main()
{
	print_rect();
	return 0;
}