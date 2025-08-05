// 25. 08. 03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat_strings(const char* str1, const char* str2) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // ���� �޸� �Ҵ�: len1 + len2 + 1 (�� ���� ����)
    char* result = (char*)malloc(len1 + len2 + 1);
    if (result == NULL) {
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }

    strcpy(result, str1);
    strcat(result, str2);

    return result; 
}

int print_str() 
{
    char str1[100], str2[100];

    printf("ù ��° ���ڿ�? ");
    scanf("%s", str1);

    printf("�� ��° ���ڿ�? ");
    scanf("%s", str2);

    char* combined = concat_strings(str1, str2);

    printf("%s\n", combined);

    free(combined);  // ���� �޸� ����
    return 0;
}

int main() 
{
    print_str();
    return 0;
}