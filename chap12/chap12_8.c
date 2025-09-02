// 25. 08. 09 (fgetc)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare_txt()
{
    FILE* fp1 = NULL;
    FILE* fp2 = NULL;

    char original[BUFSIZ];
    char target[BUFSIZ];

    printf("원본 파일? ");
    gets_s(original, sizeof(original));
    printf("타겟 파일? ");
    gets_s(target, sizeof(target));

    fp1 = fopen(original, "r");
    if (fp1 == NULL)
    {
        printf("원본 파일을 열 수 없습니다.\n");
        exit(1);
    }

    fp2 = fopen(target, "r");
    if (fp2 == NULL)
    {
        printf("타겟 파일을 열 수 없습니다.\n");
        fclose(fp1);
        exit(1);
    }

    int ch1, ch2; // 반환값 → 읽은 문자(정수형) 또는 EOF 
    int different = 0;

    while (1)
    {
        ch1 = fgetc(fp1); // 내부적으로 스트림에서 1바이트만 읽어 정수형으로 반환
        ch2 = fgetc(fp2);

        if (ch1 != ch2)
        {
            different = 1;
            break;
        }

        // 두 파일이 모두 끝났으면 비교 종료
        if (ch1 == EOF && ch2 == EOF)
            break;
    }

    if (different)
        printf("다른 파일입니다.\n");
    else
        printf("두 파일이 같습니다.\n");

    fclose(fp1);
    fclose(fp2);
}

int main()
{
    compare_txt();
    return 0;
}