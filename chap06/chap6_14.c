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
    // ���ϰ��� �������� ��� ������ ��ȯ�ص� �����Ѵ� ���Ŀ� �ش��ϴ� ���̸� 1(true), �����̸� 0(false)�� ��ȯ��
}

int check_date(int year, int month, int day)
{
    char dateA[] = { 1, 3, 5, 7, 8, 10, 12 }; // 31��
    char dateB[] = { 4, 6, 9, 11 };           // 30��

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
        printf("��¥ (�� �� ��)? ");
        scanf("%d %d %d", &year, &month, &day);

        if (!check_date(year, month, day)) {
            printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
        }
        else {
            printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.\n", year, month, day);
            break;
        }
    }
}

int main()
{
    print_date();
    return 0;
}