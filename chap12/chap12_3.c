// 25. 08. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void print_file()
{
	FILE* fp = NULL;
	char filename[BUFSIZ];
	char line[BUFSIZ];
	char alphabet[26] = { 0 };
	

	printf("���ϸ�? ");
	fgets(filename, sizeof(filename), stdin);
	filename[strcspn(filename, "\n")] = '\0';

	fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		line[strcspn(line, "\n")] = '\0';
		printf("%s\n", line);
		
		for (int i = 0; line[i] != '\0'; i++)
		{
			if (isalpha((unsigned char)line[i])) 
			{
				char lower = tolower((unsigned char)line[i]);
				alphabet[lower - 'a']++;
			}
		}
	}
	/*
	int counts[26] = {0};  // ���ĺ� a~z ������ ������ �����ϴ� �迭

	char ch = 'e';
	counts[ch - 'a']++;  // e �� 101 - 97 = 4 �� counts[4] ���� 1 ����
	'e' - 'a'�� ù ���ڿ��� �Ÿ��̰� �� ���ĺ��� �ε���
	*/

	fclose(fp);
	
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] > 0)
		{
			printf("%c:%-4d", 'a' + i, alphabet[i]);
		}
	}

	return;
}

int main()
{
	print_file();
	return 0;
}