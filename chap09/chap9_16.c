// 25. 07. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int identify_id(char* str1, char* str2)
{
    
    char id[5][24] = { "parkjimin", "kusananyo", "user1", "user2", "user3" };
    char pw[5][24] = { "@Best0fMe@", "2434", "abcd", "efgh", "ijkl" };
    
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(str1, id[i]) == 0)
        {
            if (strcmp(str2, pw[i]) == 0)
            {
                printf("�α��� ����!\n");
                return 1;
            }
            else
            {
                printf("�н����尡 Ʋ�Ƚ��ϴ�.\n");
                return 0;
            }
        }
    }

    printf("�ش� ID�� �����ϴ�.\n");
    return 0;
}

void print_str()
{
    char login_i[24];
    char login_p[24];
	int attempts = 0; // ȣ�� �� 0���� �ʱ�ȭ �ǹǷ� �������� ������ ����

    while (attempts < 3)
    {
        
        printf("ID: ");
        gets_s(login_i, sizeof(login_i));

        printf("PW: ");
        gets_s(login_p, sizeof(login_p));

        if (identify_id(login_i, login_p))
			return; // �α��� ���� �� �Լ� ����
        else
            attempts++;

    }
    printf("\n�α��� 3ȸ ����. ���α׷��� �����մϴ�.\n");
}

int main()
{
    print_str();
    return 0;
}