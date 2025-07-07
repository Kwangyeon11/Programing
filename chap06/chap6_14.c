// 25.07.05

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isInArray(char arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)); 
    // 리턴값이 정수형인 경우 논리식을 반환해도 성립한다 논리식에 해당하는 값이면 1(true), 거짓이면 0(false)를 반환함
}

int check_date(int year, int month, int day)
{
    char dateA[] = { 1, 3, 5, 7, 8, 10, 12 }; // 31일
    char dateB[] = { 4, 6, 9, 11 };           // 30일

    if (month < 1 || month > 12) return 0;
    if (day < 1) return 0;

    if (isInArray(dateA, sizeof(dateA) / sizeof(dateA[0]), month)) {
        return (day <= 31);
    }
    else if (isInArray(dateB, sizeof(dateB) / sizeof(dateB[0]), month)) {
        return (day <= 30);
    }
    else if (month == 2) {
        if (isLeapYear(year)) {
            return (day <= 29);
        }
        else {
            return (day <= 28);
        }
    }

    return 0;
}

void print_date(void)
{
    int year, month, day;

    while (1)
    {
        printf("날짜 (연 월 일)? ");
        scanf("%d %d %d", &year, &month, &day);

        if (!check_date(year, month, day)) {
            printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
        }
        else {
            printf("입력한 날짜는 %d년 %d월 %d일입니다.\n", year, month, day);
            break;
        }
    }
}

int main()
{
    print_date();
    return 0;
}