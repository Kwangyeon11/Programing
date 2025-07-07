// 25.07.05

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int x, int y)
{
	if (x == 0 || y == 0) return 0;

	if (x > 0) {
		if (y > 0) return 1;
		else       return 4;
	}
	else {
		if (y > 0) return 2;
		else       return 3;
	}
}

void print_point(void)
{
	int x, y;
	int point = 0;

	while (1)
	{
		printf("점의 좌표 (x, y)? ");
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0)
		{
			printf("원점입니다. 종료합니다.\n");
			break;
		}

		point = get_quadrant(x, y);
		switch (point)
		{
		case 1:
			printf("1사분면의 점입니다.\n");
			break;
		case 2:
			printf("2사분면의 점입니다.\n");
			break;
		case 3:
			printf("3사분면의 점입니다.\n");
			break;
		case 4:
			printf("4사분면의 점입니다.\n");
			break;
		default:
			printf("축 위에 있는 점입니다.\n");
			break;
		}
	}
} 

int main()
{
	print_point();

	return 0;
}