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
       "Live photo의 스틸 이미지를 변경할 수 있습니다.",
       "스크린 타임에서 iPhone의 하루 사용시간을 확인할 수 있습니다."
    };

    printf("엔터키를 누를 때마다 사용 팁을 보여줍니다. Ctrl+Z 로 종료합니다.\n\n");

    srand((unsigned)time(NULL));

    int ch;
    while ((ch = getchar()) != EOF) {  // 엔터 또는 Ctrl+Z로 루프 실행
        if (ch == '\n') {  // 엔터키가 눌렸을 때만 팁 출력
            int num = rand() % 2;  // 0 또는 1 중 하나
            printf("%s\n\n", tip[num]);
        }
    }

    printf("\n프로그램을 종료합니다.\n");
}

int main()
{
    print_str();
    return 0;
}