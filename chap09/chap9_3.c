// 25. 07. 21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // isupper, islower, toupper, tolower

void convert_str(char* str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower((unsigned char)str[i])) 
        {
            str[i] = toupper((unsigned char)str[i]); 
        }
        else if (isupper((unsigned char)str[i])) 
        {
            str[i] = tolower((unsigned char)str[i]); 
		}
	}
}

void print_str()
{
    char str[1000];

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);
    
    convert_str(str);

    printf("��ȯ ��: %s\n", str);

}

int main()
{
    print_str();
    return 0;
}