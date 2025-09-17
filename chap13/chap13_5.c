#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define GET_RED(color)   (((color) >> 16) & 0xFF)
#define GET_GREEN(color) (((color) >> 8)  & 0xFF)
#define GET_BLUE(color)  ((color) & 0xFF)

void print_color() {
    int color;
    
    printf("RGB »ö»ó ?");
	scanf(" %x", &color);

	printf("RGB %06XÀÇ red: %d, green: %d, blue: %d\n", 
        color, GET_RED(color), GET_GREEN(color), GET_BLUE(color));

}

int main() {
    print_color();
    return 0;
}
