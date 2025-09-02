// 25. 08. 09

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryption_txt()
{
    FILE* fp = NULL;
    int key;
    char text[BUFSIZ];

    printf("암호 키? ");
    scanf("%d", &key);
    getchar(); 

    printf("암호화할 텍스트? \n");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';


    for (int i = 0; text[i] != '\0'; i++) // 핵심
    {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ((ch - 'A' + key) % 26); //26으로 나눈 나머지 연산으로, 알파벳 순환(circular) 구조
            if (ch < 0) ch += 26; 
            text[i] = ch + 'A';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a' + key) % 26);
            if (ch < 0) ch += 26;
            text[i] = ch + 'a';
        }
    }

    fp = fopen("cipher.txt", "w"); 
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    }
    fprintf(fp, "%s", text);
    fclose(fp); 

}

int main()
{
    encryption_txt();
    return 0;
}