// 25. 08. 13 ( rewind(fp), (c = getchar()) != '\n' && c != EOF) )

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
    FILE* fp = fopen("mycontact.txt", "r");
    if (!fp) {
        printf("������ �� �� �����ϴ�.\n");
        exit(1);
    }

    int count = 0;
    CONTACT temp;

    while (fscanf(fp, "%19s %19s", temp.name, temp.num) == 2) {
        count++;
    }

    if (count == 0) {
        printf("����ó�� �����ϴ�.\n");
        fclose(fp);
        return;
    }

    CONTACT* mycon = malloc(sizeof(CONTACT) * count);
    if (!mycon) {
        printf("�޸� �Ҵ� ����\n");
        fclose(fp);
        exit(1);
    }

    // ���� ��ġ �ǵ����� ������ �б�
    rewind(fp);
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%19s %19s", mycon[i].name, mycon[i].num);
    }
    fclose(fp);

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
            break;

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(temp.name, mycon[i].name) == 0) {
                printf("%s�� ��ȭ��ȣ %s�� ��ȭ�� �̴ϴ�....\n", mycon[i].name, mycon[i].num);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("����ó�� ã�� �� �����ϴ�.\n");
        }
    }

    free(mycon);
}

int main()
{
    contact_txt();
    return 0;
}
