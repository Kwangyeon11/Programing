#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define AREA_RECT(w, h) ((w) * (h))
#define AREA_CIRCLE(r)  ((3.141592) * (r) * (r))

void print_rect() {
    int shape;
    int w, h;
	double r;

    while (1) {
        printf("도형의 종류(1.직사각형 2.원 0.종료)? ");
        scanf(" %d", &shape);

        if (shape == 1) {
            printf("가로 세로? ");
            scanf(" %d %d", &w, &h);

            printf("면적: %d\n", AREA_RECT(w, h));
        }
        else if (shape == 2) {
            printf("반지름? ");
            scanf(" %lf", &r);

            printf("면적: %lf\n", AREA_CIRCLE(r));
        }
        else if (shape == 0) {
            break;
        }
    }
  
}

int main() {
    print_rect();
    return 0;
}
