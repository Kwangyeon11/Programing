/*   ���ϸ�: Assignment10_03.c
     ��  ��: PA03. LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
     �ۼ���: �ֱ���
     ��  ¥: 2025.06.02
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LEN 5

typedef struct login {

    char id[20];
    char password[20];

} LOGIN;

void assignment_3(void);

void assignment_3(void)
{
    LOGIN arr[LEN] = { {"guest", "idontknow"}, {"Lagusa", "2434"} };
    char* p = NULL;

    char Sid[20] = { 0 };
    char Spw[20] = { 0 };

    while (1)
    {
        printf("ID? ");
        scanf("%s", &Sid);

        printf("PW: ");
        scanf("%s", &Spw);

        int i;
        for (i = 0; i < LEN; i++)
        {
            p = strstr(arr[i].id, Sid);
            if (p != NULL)
            {
                p = strstr(arr[i].password, Spw);
                if (p != NULL)
                {
                    printf("�α��� ����\n");
                }
                else break;
            }
        }
    }
}

int main()
{
    assignment_3();

    return 0;
}
