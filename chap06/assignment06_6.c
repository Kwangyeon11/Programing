/*   ���ϸ�: Assignment06_6.c
	 ����: PA06. choose_menu �Լ��� ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_munu(int select);
int assignment_6(void);

int choose_munu(int select) 
{
	switch (select)
	{
	case 1:
		printf("���� ���⸦ �����մϴ�\n");
		break;
	case 2:
		printf("������ �����մϴ�.\n");
		break;
	case 3:
		printf("�μ��մϴ�.\n");
	
	default:
		break;
	} 
	return 0;
}

int assignment_6(void)
{
	int select;
	char str;

	for (; ; )
	{
		printf("[1.���� ����  2.���� ����  3.�μ�  0.����] ����? ");
		scanf(" %d", &select);

		str = choose_munu(select);

		if (select >= 1 && select <= 3)
		{
			printf("%c", str);
		}
		
		if (select == 0)
		{
			break;
		} else continue;
	}
	return 0;
}

int main()
{
	assignment_6();
	return 0;
}
