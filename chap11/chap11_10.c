// 25. 08. 03 (bsearch, qsort)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_by_name(const void* e1, const void* e2)
{
	const char* p1 = (const char*)e1;
	const char* p2 = (const char*)e2;

	return strcmp(p1, p2);
}

void print_list()
{
	char list[5][20] = {
		"Avengers",
		"MI:Fallout",
		"Ant-Man",
		"Bohemian Rhapsody",
		"Insidious"
	};
	char temp[2][20];

	qsort(list, 5, sizeof(list[0]), compare_by_name);

	printf("<< ��ȭ ��� >>\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", list[i]);
	}

	printf("����? ");
	gets_s(temp[0], sizeof(temp[0]));
	printf("������ ����? ");
	gets_s(temp[1], sizeof(temp[1]));

	char (*found)[20] = (char(*)[20])bsearch(temp[0], list, 5, sizeof(list[0]), compare_by_name); // bsearch()

	if (found != NULL)
	{
		strcpy(*found, temp[1]);
		printf("<< ��ȭ ��� >>:\n");
		for (int i = 0; i < 5; i++)
		{
			printf("%s\n", list[i]);
		}
	}
	else
	{
		printf("�ش� ������ ��Ͽ� �����ϴ�.\n");
	}
}

int main()
{
	print_list();
	return 0;
}