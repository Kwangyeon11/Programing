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
		printf("���� ��ǥ (x, y)? ");
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0)
		{
			printf("�����Դϴ�. �����մϴ�.\n");
			break;
		}

		point = get_quadrant(x, y);
		switch (point)
		{
		case 1:
			printf("1��и��� ���Դϴ�.\n");
			break;
		case 2:
			printf("2��и��� ���Դϴ�.\n");
			break;
		case 3:
			printf("3��и��� ���Դϴ�.\n");
			break;
		case 4:
			printf("4��и��� ���Դϴ�.\n");
			break;
		default:
			printf("�� ���� �ִ� ���Դϴ�.\n");
			break;
		}
	}
} 

int main()
{
	print_point();

	return 0;
}