// 25.07.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_area_of_square(void)
{
	double len;
	double square;

	printf("한 변의 길이? ");
	scanf("%lf", &len);

	square = (len * len); // 함수로 따로 작성해야하지만 생략

	printf("정사각형의 면적: %.2f\n", square);

	return;
}

int main()
{
	get_area_of_square();

	return 0;
}
