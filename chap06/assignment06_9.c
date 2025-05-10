/*   ���ϸ�: Assignment06_9.c
	 ����: PA09. �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
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
	
	printf("RGB ����? ");
	scanf(" %i", &color);

	R = get_red(color);
	G = get_green(color);
	B = get_blue(color);
	fixmsb = 0x00ffff;

	complementaryC = R & G & B & fixmsb;
	
	printf("RGB %X�� ����: %06X", color, complementaryC);

	return 0;
}

int main()
{
	make_rgb();
	return 0;
}