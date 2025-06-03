/*   파일명: Assignment10_01.c
     내  용: PA01. LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
     작성자: 주광연
     날  짜: 2025.06.02
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LEN 20

typedef struct login {
   
    char id[LEN];
    char password[LEN];

} LOGIN;



void assignment_1(void);

void assignment_1(void)
{

    LOGIN log;


    printf("ID? ");
    scanf("%s", &log.id);

    printf("Password? ");
    scanf("%s", &log.password);

    printf("ID: %s\n", log.id);
    printf("PW: ");
    
    int i;
    for (i = 0; i < strlen(log.password); i++)
    {
        printf("*");
    }

}

int main()
{
    assignment_1();

    return 0;
}

