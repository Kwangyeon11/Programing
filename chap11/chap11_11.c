// 25. 08. 03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat_strings(const char* str1, const char* str2) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 동적 메모리 할당: len1 + len2 + 1 (널 문자 포함)
    char* result = (char*)malloc(len1 + len2 + 1);
    if (result == NULL) {
        printf("메모리 할당 실패\n");
        exit(1);
    }

    strcpy(result, str1);
    strcat(result, str2);

    return result; 
}

int print_str() 
{
    char str1[100], str2[100];

    printf("첫 번째 문자열? ");
    scanf("%s", str1);

    printf("두 번째 문자열? ");
    scanf("%s", str2);

    char* combined = concat_strings(str1, str2);

    printf("%s\n", combined);

    free(combined);  // 동적 메모리 해제
    return 0;
}

int main() 
{
    print_str();
    return 0;
}