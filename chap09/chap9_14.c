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
        printf("ID�� 8�� �̻��̾�� �մϴ�.\n");
        return 0;
	}
    if (!isalpha((unsigned char)str1[0]))
    {
        printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
        return 0;
    }
    else
    {
        printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", str1);
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
            printf("���α׷� ����");
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