#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAKE_RGB(color) (color ^ 0xFFFFFF)

void print_color() {
    int color;

    printf("RGB 색상? ");
    scanf(" %x", &color);

    printf("RGB %06X의 보색: %06X\n", 
		color, MAKE_RGB(color));

}

int main() {
    print_color();
    return 0;
}
