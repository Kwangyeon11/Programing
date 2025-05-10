/*   파일명: Assignment06_9.c
	 내용: PA09. 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날짜: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(void);
unsigned int get_red(int color);
unsigned int get_green(int color);
unsigned int get_blue(int color);


unsigned int get_red(int color)
{
	unsigned int mask = (0xff << 16);
	unsigned int bit = (mask & color);
	unsigned int red = ~bit;
	
	return red;
}
unsigned int get_green(int color)
{
	unsigned int mask = (0xff << 8);
	unsigned int bit = (mask & color);
	unsigned int green = ~bit;

	return green;
}
unsigned int get_blue(int color)
{
	unsigned int mask = 0xff;
	unsigned int bit = (mask & color);
	unsigned int blue = ~bit;

	return blue;
}

int make_rgb(void)
{
	
	unsigned int color;
	unsigned int R, G, B;
	unsigned int complementaryC;
	unsigned int fixmsb;
	
	printf("RGB 색상? ");
	scanf(" %i", &color);

	R = get_red(color);
	G = get_green(color);
	B = get_blue(color);
	fixmsb = 0x00ffff;

	complementaryC = R & G & B & fixmsb;
	
	printf("RGB %X의 보색: %06X", color, complementaryC);

	return 0;
}

int main()
{
	make_rgb();
	return 0;
}