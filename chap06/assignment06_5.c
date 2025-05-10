/*   ���ϸ�: Assignment06_5.c
	 ����: PA05. is_even, is_odd �� �Լ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���Ͽ� ¦��, Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��¥: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int num);
int is_odd(int num);
int assignment_5(void);

int is_even(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
}
int is_odd(int num)
{
	if (num % 2 == 1)
	{
		return 1;
	}
}

int assignment_5(void)
{
	int num;
	int count1 = 0;
	int count2 = 0;
	
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	for ( ; ; )
	{
		scanf("%d", &num);
		
		if (num != 0)
		{
			if (num % 2 == 0)
			{
				count1 += is_even(num);
			}
			if (num % 2 == 1)
			{
				count2 += is_odd(num);
			}	
		}
		else if (num == 0)
			break;
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", count1, count2);
	
	return 0;
}

int main()
{
	assignment_5();
	return 0;
}