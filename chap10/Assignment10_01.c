/*   ���ϸ�: Assignment10_01.c
     ��  ��: PA01. LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
     �ۼ���: �ֱ���
     ��  ¥: 2025.06.02
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

