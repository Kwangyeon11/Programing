// 25. 07. 21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <ctype.h> 

void convert_str(char* str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isupper((unsigned char)str[i]))
        {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}
int compare_str(char* str1, char* str2)
{
    int i;
    for (i = 0; i < str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        else if (str1[i] == str2[i])
            return 1;
    }

}

void print_str()
{
    char str1[1000] = { NULL };
	char str2[1000] = { NULL };
	char org_str1[1000] = { NULL };
	char org_str2[1000] = { NULL };

    printf("ù ��° ���ڿ�? ");
    gets_s(str1, sizeof(str1));

	printf("�� ��° ���ڿ�? ");
	gets_s(str2, sizeof(str2));

    strcpy(org_str1, str1);
    strcpy(org_str2, str2);

    convert_str(str1);
	convert_str(str2);
	compare_str(str1, str2);

    if (compare_str(str1, str2))
    {
        printf("%s�� %s�� �����ϴ�.\n", org_str1, org_str2);
    }
    else
    {
        printf("�� ���ڿ��� �ٸ��ϴ�.\n");
    }

}

int main()
{
    print_str();
    return 0;
}