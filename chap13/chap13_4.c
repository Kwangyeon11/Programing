#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define AREA_RECT(w, h) ((w) * (h))
#define AREA_CIRCLE(r)  ((3.141592) * (r) * (r))

void print_rect() {
    int shape;
    int w, h;
	double r;

    while (1) {
        printf("������ ����(1.���簢�� 2.�� 0.����)? ");
        scanf(" %d", &shape);

        if (shape == 1) {
            printf("���� ����? ");
            scanf(" %d %d", &w, &h);

            printf("����: %d\n", AREA_RECT(w, h));
        }
        else if (shape == 2) {
            printf("������? ");
            scanf(" %lf", &r);

            printf("����: %lf\n", AREA_CIRCLE(r));
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
