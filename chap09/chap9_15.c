// 25. 07. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int time_to_str(char* str, int size) // 문제 요구 사항 파악 x
{

    int hh = (str[0] - '0') * 10 + (str[1] - '0');
    int mm = (str[3] - '0') * 10 + (str[4] - '0');
    int ss = (str[6] - '0') * 10 + (str[7] - '0');

    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59)
    {
        printf("시간 범위를 벗어났습니다. (hh: 00~23, mm/ss: 00~59)\n");
        return  -1;
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return size;

}

void print_str()
{
    char str1[24] = { NULL };

    printf("시 분 초? ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

	int len = strlen(str1);
    
    time_to_str(str1, (len + 1));
}

int main()
{
    print_str();
    return 0;
}