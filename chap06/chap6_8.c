// 25.07.04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_color(void);

int get_red(int color)
{
	int red;
	int mask = 0x0000ff;
	
	red = color & mask;
	return red;
}
int get_green(int color)
{
	int green;
	int shift;
	int mask = 0x00ff00;
	
	green = color & mask;
	shift = green >> 8;
	return shift;
}
int get_blue(int color)
{
	int blue;
	int shift;
	int mask = 0xff0000;

	blue = color & mask;
	shift = blue >> 16;
	return shift;
}

void print_color(void)
{
	int color;
	
	printf("RGB »ö»ó? ");
	scanf("%x", &color);

	printf("RGB %XÀÇ red: %d, green: %d, blue: %d\n", color,
		get_red(color), get_green(color), get_blue(color));

	return;

}

int main()
{
	print_color();

	return 0;
}