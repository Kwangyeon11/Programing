// 25. 07. 21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  // isspace �Լ� ����� ���� �ʿ�

int count_space() 
{
    char str[1000];
    int count = 0;

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);  // ���� ���� ���ڿ� �Է�

    for (int i = 0; str[i] != '\0'; i++) {
		if (isspace((unsigned char)str[i])) {// isspace �Լ��� ���� ���ڸ� �˻�   
            count++;
        }
    }

    printf("���� ������ ����: %d\n", count);

    return 0;
}

int main()
{
    count_space();
    return 0;
}