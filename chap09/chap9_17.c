// 25. 07. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void manage_playlist(char(*p)[41], int select, int count) // char(*p)[SIZE], SIZE ���� �ʿ�
{
    char temp1[41] = { NULL };
    
    switch (select) 
    {
        case 1:
        {
            printf("�뷡 ����? ");
            gets_s(p[count - 1], 41);
            break;
            
        }
        case 2:
        {
            printf("ã�� �뷡 ����? ");
            gets_s(temp1, 41);
            
			int found = 0; // ã�Ҵ��� ���θ� ��Ÿ���� ����
            for (int i = 0; i < count; i++)
            {
                if (strcmp(p[i], temp1) == 0)
                {
                    printf("������ ����? ");
                    gets_s(p[i], 41);
					found = 1;
                    break;
                }
			}
			if (!found) // �̷������� ���⿡ ����
                 printf("ã�� �뷡�� �����ϴ�.\n");
            
            break;
        }
        case 3:
        {
            printf("<< �뷡 ��� >>\n");
            for (int i = 0; i < count; i++)
            {
                printf(" %s\n", p[i]);
			}
            break;
		}
        case 0:
        {
            printf("���α׷��� �����մϴ�.\n");
            exit(0);
		}
    }

}

void print_str()
{
    char playlist[20][41];
    char (*p)[41] = playlist;
	int select = 0;
    int count = 0;

    while (1)
    {
        printf("[ 0.���� 1.�߰� 2.���� 3.��� ] ����? ");
		scanf("%d", &select);
		getchar(); // ���� ���� (�ʿ伺 �𸣰���)

        if (select == 1) 
        {
            if (count >= 20) 
            {
                printf("�� �̻� �߰��� �� �����ϴ�.\n");
                continue;
            }
            count++;
        }

        manage_playlist(p, select, count);
    }
}

int main()
{
    print_str();
    return 0;
}