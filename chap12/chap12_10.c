// 25. 08. 09

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decryption_txt()
{
    FILE* fp = NULL;
    int key;
    char file[BUFSIZ];

    printf("��ȣȭ�� ����? ");
	fgets(file, sizeof(file), stdin);
	file[strcspn(file, "\n")] = '\0';
    
    printf("��ȣ Ű? ");
    scanf("%d", &key);
    getchar();

    fp = fopen(file, "r");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        exit(1);
    }
	
    char text[BUFSIZ];
    while (fgets(text, sizeof(text), fp) != NULL)
    {
        text[strcspn(text, "\n")] = '\0';

        for (int i = 0; text[i] != '\0'; i++)
        {
            char ch = text[i];
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ((ch - 'A' + key) % 26);
                if (ch < 0) ch += 26;  // ���� ����
                text[i] = ch + 'A';
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                ch = ((ch - 'a' + key) % 26);
                if (ch < 0) ch += 26;
                text[i] = ch + 'a';
            }
        }
		printf("%s\n", text); 
    }
    
    fclose(fp);

    return;
}

int main()
{
    decryption_txt();
    return 0;
}