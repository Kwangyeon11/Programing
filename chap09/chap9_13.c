// 25. 07. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print_str()
{
    char tip[2][100] = 
    {
       "Live photo�� ��ƿ �̹����� ������ �� �ֽ��ϴ�.",
       "��ũ�� Ÿ�ӿ��� iPhone�� �Ϸ� ���ð��� Ȯ���� �� �ֽ��ϴ�."
    };

    printf("����Ű�� ���� ������ ��� ���� �����ݴϴ�. Ctrl+Z �� �����մϴ�.\n\n");

    srand((unsigned)time(NULL));

    int ch;
    while ((ch = getchar()) != EOF) {  // ���� �Ǵ� Ctrl+Z�� ���� ����
        if (ch == '\n') {  // ����Ű�� ������ ���� �� ���
            int num = rand() % 2;  // 0 �Ǵ� 1 �� �ϳ�
            printf("%s\n\n", tip[num]);
        }
    }

    printf("\n���α׷��� �����մϴ�.\n");
}

int main()
{
    print_str();
    return 0;
}