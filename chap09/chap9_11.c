// 25. 07. 23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check_str(char* str1, char* str2, int count)
{
    char temp[24] = { NULL };
    int len = strlen(str1);
    if (str1[len - 1] == str2[0])
    {
        strcpy(str1, str2);
        strcpy(str2, temp);
        return 1;
    }
    else
		return 0;
}

void print_str()
{
    char str1[24] = { NULL };
    char str2[24] = { NULL };
	int count = 0;

    printf("word? ");
    gets_s(str1, sizeof(str1));
    int len = strlen(str1);

    if (len < 3)
        printf("too short try again\n");

    while (1)
    {
        printf("word? ");
        gets_s(str2, sizeof(str2));

        int len2 = strlen(str2);

        if (len2 < 3)
        {
            printf("too short try again\n");
            continue;
        }
        if (check_str(str1, str2, count))
        {
            count++;
            continue;
        }
        else
        {
            printf("WRONG WORD! YOU FAILED!\n");
            printf("count: %d\n", count);
        }

        
    }
}

int main()
{
    print_str();
    return 0;
}