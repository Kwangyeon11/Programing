#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define USE_INT_POINT 1 

typedef struct {
    int x;
    int y;
} POINT;

typedef struct {
    double x;
    double y;
} POINT2;

void get_length_int(POINT* pt1, POINT* pt2) {
    double length = sqrt((pt2->x - pt1->x) * (pt2->x - pt1->x)
        + (pt2->y - pt1->y) * (pt2->y - pt1->y));

    printf("(%d, %d)�� (%d, %d) ������ �Ÿ�: %.6f\n",
        pt1->x, pt1->y, pt2->x, pt2->y, length);
}

void get_length_double(POINT2* pt1, POINT2* pt2) {
    double length = sqrt((pt2->x - pt1->x) * (pt2->x - pt1->x)
        + (pt2->y - pt1->y) * (pt2->y - pt1->y));

    printf("(%.2f, %.2f)�� (%.2f, %.2f) ������ �Ÿ�: %.6f\n",
        pt1->x, pt1->y, pt2->x, pt2->y, length);
}

void print_pt_d() {
    POINT pt1, pt2;
    printf("���� ��ǥ? ");
    scanf("%d %d", &pt1.x, &pt1.y);
    printf("���� ��ǥ? ");
    scanf("%d %d", &pt2.x, &pt2.y);
    get_length_int(&pt1, &pt2);
}

void print_pt_f() {
    POINT2 pt1, pt2;
    printf("���� ��ǥ? ");
    scanf("%lf %lf", &pt1.x, &pt1.y);
    printf("���� ��ǥ? ");
    scanf("%lf %lf", &pt2.x, &pt2.y);
    get_length_double(&pt1, &pt2);
}

int main() {
#if USE_INT_POINT == 1
    print_pt_d();
#else
    print_pt_f();
#endif
    return 0;
}