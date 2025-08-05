// 25. 07. 30

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

typedef struct point
{
	int x;
	int y;
} POINT;

void swap_point(POINT* p)
{
	int i, j, min_index;

	for (i = 0; i < SIZE - 1; i++)
	{
		min_index = i; // 중요
		POINT temp;

		for (j = i + 1; j < SIZE; j++)
		{
			if (p[j].x < p[min_index].x)
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			temp = p[i];
			p[i] = p[min_index];
			p[min_index] = temp;
		}
	}
}


void print_point()
{
	POINT poi[SIZE] =
	{
		{7, 4}, {12, 93}, {22, 31}, {1, 20}, {34,53} , {41, 2}, {32, 9}, {21, 31}, {8, 2}, {3, 5}
	};

	printf("<<정렬 전>>\n");
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("(%d, %d)\n", poi[i].x, poi[i].y);
	}
	printf("<<정렬 후>>\n");

	swap_point(poi);

	for (i = 0; i < SIZE; i++)
	{
		printf("(%d, %d)\n", poi[i].x, poi[i].y);
	}

}

int main()
{
	print_point();
	return 0;
}