// 25. 08. 08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct login
{
    char id[20];
    char password[20];
} LOGIN;

void print_file()
{
    FILE* fp = NULL;
    LOGIN file[10]; 
    int file_count = 0; 

    fp = fopen("password.txt", "r");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        exit(1);
    }

    while (file_count < 10 && fscanf(fp, "%s %s", file[file_count].id, file[file_count].password) == 2) // �ٽ��ڵ�
    {
        file_count++;
    }

    fclose(fp);

    while (1)
    {
        char input_id[20], input_pw[20];
        int found = 0;

        printf("ID? ");
        scanf("%s", input_id);

        if (strcmp(input_id, ".") == 0)
            break;

        for (int i = 0; i < file_count; i++)
        {
            if (strcmp(input_id, file[i].id) == 0)
            {
                found = 1;
                printf("Password? ");
                scanf("%s", input_pw);

                if (strcmp(input_pw, file[i].password) == 0)
                {
                    printf("�α��� ����!\n");
                }
                else
                {
                    printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
                }
                break;
            }
        }

        if (!found)
        {
            printf("ID�� ã�� �� �����ϴ�.\n");
        }
    }

    return;
}

int main()
{
    print_file();
    return 0;
}
