// 25. 07. 21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <ctype.h> 

void reverse_str(char* str)
{
    int i, j;
	char *p = strchr(str, '\0');
    int len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
		char temp = str[i];
        str[i] = *(p - 1 - i);
		*(p - 1 - i) = temp;
	}

}

void print_str()
{
    char str[1000] = { NULL };

    printf("문자열? ");
    gets_s(str, sizeof(str)); // fgets의 경우 개행 문자 제거: str[strcspn(str, "\n")] = '\0'; 필요

    reverse_str(str);

    printf("역순으로 된 문자열: %s\n", str);

}

int main()
{
    print_str();
    return 0;
}