// 25. 08. 08 (�ؽ�Ʈ ���� �����, fprintf, fscanf)

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
    LOGIN file[20]; 
	int file_count = 0; // �ٽ�

    fp = fopen("password.txt", "r");
    if (fp != NULL) 
    {
        while (file_count < 20 && fscanf(fp, "%s %s", file[file_count].id, file[file_count].password) == 2)
        {
            file_count++;
        }
        fclose(fp);
    }

    while (1)
    {
        char input_id[20], input_pw[20]; 
        int found = 0; // üũ

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

        if (!found) // �ڵ尡 �����ϰ� ȿ����
        {
            printf("ID�� ã�� �� �����ϴ�. ����Ͻðڽ��ϱ�(y/n)? ");
            char choice;
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                if (file_count < 20)
                {
                    while (1)
                    {
                        strcpy(file[file_count].id, input_id);
                        printf("PW? ");
                        scanf("%s", file[file_count].password);

                        printf("PW again? ");
                        scanf("%s", input_pw);

                        if (strcmp(file[file_count].password, input_pw) == 0)
                        {
                            printf("ID and PW registered successfully.\n");
                            file_count++;
                            break;
                        }
                        else
                        {
                            printf("Password doesn't match.\n");
                        }
                    }
                }
                else 
                {
                    printf("����� �� �ִ� ID�� �ִ�ġ�� �����߽��ϴ�.\n");
                }
            }
            else if (choice == 'n' || choice == 'N') 
            {
                printf("����� ����մϴ�.\n");
            }
            else 
            {
                printf("�߸��� �Է��Դϴ�.\n");
            }
        }
    }

    // ���α׷� ���� ���� ���Ͽ� ����
    fp = fopen("password.txt", "w");  // ���� ���� ����
    if (fp == NULL) 
    {
        printf("���� ���� �� ������ �߻��߽��ϴ�.\n");
        exit(1);
    }

    for (int i = 0; i < file_count; i++) 
    {
        fprintf(fp, "%s %s\n", file[i].id, file[i].password); // ���� printf���� ���� �տ� ��Ʈ�� ������ ���� fp �߰�
    }

    fclose(fp);
    return;
}

int main()
{
    print_file();
    return 0;
}
