// 25. 07. 22

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int shift_str(char* str1, const char* up, const char* low, int key)
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (isupper((unsigned char)str1[i]))
        {
            char* p1 = strchr(up, str1[i]);
            if (p1 != NULL)
                str1[i] = *(p1 + key);
            return 1;
        }
        if (islower((unsigned char)str1[i]))
        {
            char* p2 = strchr(low, str1[i]);
            if (p2 != NULL)
                str1[i] = *(p2 + key);
            return 1;
        }
    }
}

void print_str()
{
    char str1[24];
    char up[24];
    char low[24];
    int key = 0;

    for (int i = 0; i < 26; i++)  // �迭�� ���ĺ� ä���
    {
        up[i] = 'A' + i;
    }
    for (int i = 0; i < 26; i++) 
    {
        low[i] = 'a' + i; 
    }

    while (1)
    {
        printf("���ڿ�? ");
		gets_s(str1, sizeof(str1));
       
        printf("��ȣ Ű(����)? ");
		scanf("%d", &key);

        if (strcmp(str1, ".") == 0)
        {
            printf("�����մϴ�.\n");
            break;
        }
        
        if(shift_str(str1, up, low, key))
        printf("��ȣȭ�� ���ڿ�: %s\n", str1);
    }
}

int main()
{
    print_str();
    return 0;
}
