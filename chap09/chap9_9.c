// 25. 07. 23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print_str()
{
    char str1[24];
    char str2[24];

    printf("파일명? ");
    gets_s(str1, sizeof(str1));

    printf("확장자? ");
    gets_s(str2, sizeof(str2));

    printf("전체 파일명: %s.%s", str1, str2);
}

int main()
{
    print_str();
    return 0;
}
