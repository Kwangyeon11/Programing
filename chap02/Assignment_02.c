/*   ���ϸ�: Assignment_02.c
    * ����: PA02. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ��, ���� ������ �Է¹޴´�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.3.21
    * ����: v1.0
    */

#include <stdio.h>

void student(void);

int main()
{
	student();

	return 0;
}

void student(void)
{
	int num;
	float grade;

	printf("��ȣ? ");
	scanf_s("%d", &num);
	printf("����? ");
	scanf_s("%f", &grade);

	printf("%d�� �л��� ������ %f�Դϴ�", num, grade );

	return;
}
