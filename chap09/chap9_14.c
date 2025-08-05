// 25. 07. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check_ID(char* str1)
{
	int len = strlen(str1);

    if (len < 8)
    {
        printf("ID는 8자 이상이어야 합니다.\n");
        return 0;
	}
    if (!isalpha((unsigned char)str1[0]))
    {
        printf("ID는 영문자로 시작해야 합니다.\n");
        return 0;
    }
    else
    {
        printf("%s는 ID로 사용할 수 있습니다.\n", str1);
        return 1;
    }

}

void print_str()
{
	char str1[100] = { NULL };

	char str2[100] = { NULL };

    while (1)
    {
        printf("ID? ");
		fgets(str1, sizeof(str1), stdin);

        str1[strcspn(str1, "\n")] = 0;

        if (strcmp(str1, ".") == 0)
        {
            printf("프로그램 종료");
            break;
        }
        
        check_ID(str1);    
    }
}

int main()
{
    print_str();
    return 0;
}