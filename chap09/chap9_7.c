// 25. 07. 22

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check_phone_str(const char* str)
{
    char number[] = { '0', '1', '0' };
	int len = strlen(str);   
    
    if (len != 11)
    {
        return 0;
	}
    
    int i;
    for (i = 0; i < 3; i++) // 국번 "010"만 유효
    {
        if (str[i] != number[i])
        {
            return 0;
        }
	}

    for (i = 0; i < 11; i++)
    {
        if (!isdigit((unsigned char)str[i]))
            return 0;
        else
            return 1;
    }
}

void print_str() 
{
    char str1[100];

    while (1) 
    {
        printf("전화번호(.입력 시 종료)? ");
        gets_s(str1, sizeof(str1));

        if (strcmp(str1, ".") == 0)
        {
            printf("종료합니다.\n");
            break;
        }

        if(check_phone_str(str1))
        {
            printf("%s는 유효한 전화번호입니다.\n", str1);
        }
        else
        {
            printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
		}
    }
}

int main() 
{
    print_str();
    return 0;
}
