/*   ���ϸ�: Assignment_05.c
	* ����: PA05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.3.21
	* ����: v1.0
	*/

#include <stdio.h>

void weight(void);

int main()
{
	weight();

	return 0;
}

void weight(void)
{
	float mass;
		
	printf("������? ");
	scanf_s("%f", &mass);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", mass);

	return;
}