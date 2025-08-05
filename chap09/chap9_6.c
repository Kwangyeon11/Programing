// 25. 07. 21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check_time_str(const char* str) 
{

    if (strlen(str) != 6) 
    {
        printf("�߸� �Է��߽��ϴ�. hhmmss �������� 6�ڸ� �Է��ϼ���.\n");
        return 0;
    }

    // ��� �������� Ȯ��
    for (int i = 0; i < 6; i++) {
        if (!isdigit((unsigned char)str[i])) 
        {
            printf("���ڰ� �ƴ� ���ڰ� ���ԵǾ� �ֽ��ϴ�.\n");
            return 0;
        }
    }

    /* ��, ��, �� ����, ���� '7'�� ���������� int �� 55������, '7' - '0' �ϸ� 55 - 48 = 7�� ��
	   �� ������� ���� '7'�� ���� 7�� ��ȯ�� �� ���� ('0'�� ASCII �ڵ� 48)
    */ 
    int hh = (str[0] - '0') * 10 + (str[1] - '0');
    int mm = (str[2] - '0') * 10 + (str[3] - '0');
    int ss = (str[4] - '0') * 10 + (str[5] - '0');

    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) 
    {
        printf("�ð� ������ ������ϴ�. (hh: 00~23, mm/ss: 00~59)\n");
        return 0;
    }

    printf("�Է��� �ð�: %02d:%02d:%02d\n", hh, mm, ss);
    return 1;
}

void print_str() {
    char str1[100];

    while (1) {
        printf("�ð�(.�Է� �� ����)? ");
        fgets(str1, sizeof(str1), stdin);

        str1[strcspn(str1, "\n")] = '\0';
        
        if (strcmp(str1, ".") == 0)
            break;
       
        check_time_str(str1);
    }
}

int main() {
    print_str();
    return 0;
}
