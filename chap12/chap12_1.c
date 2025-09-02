// 25. 08. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_file()
{
    FILE* fp = NULL;
    char filename[BUFSIZ];
    char line[BUFSIZ];
    int line_num = 1;

    printf("���ϸ�? ");
	fgets(filename, sizeof(filename), stdin);
	filename[strcspn(filename, "\n")] = 0;

    fp = fopen(filename, "r"); 
    if (fp == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        printf("%3d: %s\n", line_num++, line);
    }

    fclose(fp);
    return;
}

int main()
{
    print_file();
    return 0;
}