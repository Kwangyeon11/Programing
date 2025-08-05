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
        printf("잘못 입력했습니다. hhmmss 형식으로 6자리 입력하세요.\n");
        return 0;
    }

    // 모두 숫자인지 확인
    for (int i = 0; i < 6; i++) {
        if (!isdigit((unsigned char)str[i])) 
        {
            printf("숫자가 아닌 문자가 포함되어 있습니다.\n");
            return 0;
        }
    }

    /* 시, 분, 초 추출, 문자 '7'은 내부적으로 int 값 55이지만, '7' - '0' 하면 55 - 48 = 7이 됨
	   이 방식으로 문자 '7'을 숫자 7로 변환할 수 있음 ('0'은 ASCII 코드 48)
    */ 
    int hh = (str[0] - '0') * 10 + (str[1] - '0');
    int mm = (str[2] - '0') * 10 + (str[3] - '0');
    int ss = (str[4] - '0') * 10 + (str[5] - '0');

    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) 
    {
        printf("시간 범위를 벗어났습니다. (hh: 00~23, mm/ss: 00~59)\n");
        return 0;
    }

    printf("입력한 시간: %02d:%02d:%02d\n", hh, mm, ss);
    return 1;
}

void print_str() {
    char str1[100];

    while (1) {
        printf("시간(.입력 시 종료)? ");
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
