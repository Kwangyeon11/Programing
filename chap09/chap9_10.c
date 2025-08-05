// 25. 07. 23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int get_initial(char* str1, char* str2)
{
	char* p = strtok(str1, " ");

    int i;
    for (i = 0; p != NULL; i++)
    {
		str2[i] = toupper((unsigned char)p[0]);
        p = strtok(NULL, " ");
	}
    return 1;
}

void print_str()
{
    char str1[24] = { NULL };
    char str2[24] = { NULL };

    while (1)
    {
        printf("영문 이름? ");
        gets_s(str1, sizeof(str1));

        if (strcmp(str1, ".") == 0)
            break;
        
        if (get_initial(str1, str2))
            printf("이니셜: %s\n", str2);
    }
}

int main()
{
    print_str();
    return 0;
}