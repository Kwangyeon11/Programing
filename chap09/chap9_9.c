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

    printf("���ϸ�? ");
    gets_s(str1, sizeof(str1));

    printf("Ȯ����? ");
    gets_s(str2, sizeof(str2));

    printf("��ü ���ϸ�: %s.%s", str1, str2);
}

int main()
{
    print_str();
    return 0;
}
