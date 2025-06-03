/*   파일명: Assignment10_03.c
     내  용: PA03. LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
     작성자: 주광연
     날  짜: 2025.06.02
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
                    printf("로그인 성공\n");
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
