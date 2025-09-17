#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define USE_USA_FORMAT 1

typedef struct date{
	char year[10];
	char month[10];
	char day[10];
} DATE;

void print_date() {
	FILE* fp = NULL;
	
	DATE date; // �ֿܼ���
	DATE holiday; // ���Ͽ���

	const char* MONTH_NAMES[] = {
	"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
	"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};

	fp = fopen("date.txt", "r");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	while (1) {
		printf ("��¥(������)? ");
		scanf ("%s %s %s", &date.year, &date.month, &date.day);
		
		if (strcmp(date.year, "0") == 0 && strcmp(date.month, "0") == 0 && strcmp(date.day, "0") == 0)
			break;

		while (fscanf(fp, "%s %s %s", &holiday.year, &holiday.month, &holiday.day) != NULL) {
			if (strcmp(date.year, holiday.year) == 0 && strcmp(date.month, holiday.month) == 0 && strcmp(date.day, holiday.day) == 0) {
				int month_num = atoi(date.month); // ���ڿ� ���� ���� ���� ��ȯ
				
				if (USE_USA_FORMAT == 1)
					printf("%s %s %s�� ", MONTH_NAMES[month_num], date.day, date.year); // ���� ���� �ε����� �̿�
				else if (USE_USA_FORMAT == 0)
					printf("%s/%s/%s�� ", date.year, date.month, date.day);

				printf("�������Դϴ�.\n");
				break;
			}
			else {
				int month_num = atoi(date.month); // ���ڿ� ���� ���� ���� ��ȯ

				if (USE_USA_FORMAT == 1)
					printf("%s %s %s�� ", MONTH_NAMES[month_num], date.day, date.year);
				else if (USE_USA_FORMAT == 0)
					printf("%s/%s/%s�� ", date.year, date.month, date.day);

				printf("�������� �ƴմϴ�.\n");
				break;
			}
		}
	}
	fclose(fp);

	return;
}

void set_as_today(DATE* date) {
}
void is_same_date(DATE* date1, DATE* date2) {
}

int main() {
	print_date();
   
	return 0;
}