// 25. 08. 13 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
    char name[20];
    char num[20];
} CONTACT;

void contact_txt()
{
    char filename[24];
	printf("����ó ���ϸ�? ");
	fgets(filename, sizeof(filename), stdin);
	filename[strcspn(filename, "\n")] = '\0';

    FILE* fp = fopen(filename, "r");
    if (!fp) {
        printf("������ �� �� �����ϴ�.\n");
        exit(1);
    }

    int count = 0;
    CONTACT temp;

    while (fscanf(fp, "%19s %19s", temp.name, temp.num) == 2) 
    {
        count++;
    }

    if (count == 0) 
    {
        printf("����ó�� �����ϴ�.\n");
        fclose(fp);
        return;
    }

    CONTACT* mycon = malloc(sizeof(CONTACT) * count);
    if (!mycon) 
    {
        printf("�޸� �Ҵ� ����\n");
        fclose(fp);
        exit(1);
    }

    // ���� ��ġ �ǵ����� ������ �б�
    rewind(fp);
    for (int i = 0; i < count; i++) 
    {
        fscanf(fp, "%19s %19s", mycon[i].name, mycon[i].num);
    }

    printf("%d���� ����ó�� �ε��߽��ϴ�.\n", count);

    // �Է� ���� ���� ����
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    while (1)
    {
        printf("�̸�(. �Է� �� ����)? ");
        fgets(temp.name, sizeof(temp.name), stdin);
        temp.name[strcspn(temp.name, "\n")] = '\0';

        if (strcmp(temp.name, ".") == 0)
        {
            printf("%s�� %d���� ����ó�� �����߽��ϴ�.\n", filename, count);
            break;

        }
            
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(temp.name, mycon[i].name) == 0) {
                printf("%s�� ��ȭ��ȣ %s�� ��ȭ�� �̴ϴ�....\n", mycon[i].name, mycon[i].num);
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            printf("����ó�� ã�� �� �����ϴ�. ����ó�� ����Ͻðڽ��ϱ�(y/n)? ");
            char choice;
			scanf(" %c", &choice);
            while (getchar() != '\n'); // �Է� ���� ���� ����(�߿�)
            if (choice == 'y' || choice == 'Y') 
            {
                printf("��ȭ��ȣ? ");
                fgets(temp.num, sizeof(temp.num), stdin);
                temp.num[strcspn(temp.num, "\n")] = '\0';
                // ����ó �߰�
                mycon = realloc(mycon, sizeof(CONTACT) * (count + 1));
                if (!mycon) 
                {
                    printf("�޸� �Ҵ� ����\n");
                    exit(1);
                }
                strcpy(mycon[count].name, temp.name);
                strcpy(mycon[count].num, temp.num);
                count++;
				fp = fopen(filename, "a");
                if (!fp) 
                {
                    printf("������ �� �� �����ϴ�.\n");
                    free(mycon);
                    exit(1);
                }
                fprintf(fp, "%s %s\n", temp.name, temp.num);
                fclose(fp);
				printf("����ó�� ��ϵǾ����ϴ�.\n");
                continue;
            } 
            else if (choice == 'n' || choice == 'N') 
            {
                printf("����� ����մϴ�.\n");
                continue;
            } 
            else 
            {
                printf("�߸��� �Է��Դϴ�.\n");
                continue;
			}
        }
    }

    free(mycon);
}

int main()
{
    contact_txt();
    return 0;
}
