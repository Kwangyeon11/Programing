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

    printf("���ڿ�? ");
    gets_s(str, sizeof(str)); // fgets�� ��� ���� ���� ����: str[strcspn(str, "\n")] = '\0'; �ʿ�

    reverse_str(str);

    printf("�������� �� ���ڿ�: %s\n", str);

}

int main()
{
    print_str();
    return 0;
}