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

    printf("���� ����? ");
    gets_s(original, sizeof(original));
    printf("Ÿ�� ����? ");
    gets_s(target, sizeof(target));

    fp1 = fopen(original, "r");
    if (fp1 == NULL)
    {
        printf("���� ������ �� �� �����ϴ�.\n");
        exit(1);
    }

    fp2 = fopen(target, "r");
    if (fp2 == NULL)
    {
        printf("Ÿ�� ������ �� �� �����ϴ�.\n");
        fclose(fp1);
        exit(1);
    }

    int ch1, ch2; // ��ȯ�� �� ���� ����(������) �Ǵ� EOF 
    int different = 0;

    while (1)
    {
        ch1 = fgetc(fp1); // ���������� ��Ʈ������ 1����Ʈ�� �о� ���������� ��ȯ
        ch2 = fgetc(fp2);

        if (ch1 != ch2)
        {
            different = 1;
            break;
        }

        // �� ������ ��� �������� �� ����
        if (ch1 == EOF && ch2 == EOF)
            break;
    }

    if (different)
        printf("�ٸ� �����Դϴ�.\n");
    else
        printf("�� ������ �����ϴ�.\n");

    fclose(fp1);
    fclose(fp2);
}

int main()
{
    compare_txt();
    return 0;
}