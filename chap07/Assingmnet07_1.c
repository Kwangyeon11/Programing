/*   ���ϸ�: Assignment07_1.c
	 ��  ��: PA01. ù ��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.05.21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10

int assignment7_1(void);

void getCD(int start, int comdiff);

void getCD(int start, int comdiff)
{
	int i;
	int arr[size] = { 0 };

	for (i = 0; i < size; i++)
	{
		arr[i] = ( comdiff * i) + start;
	}

	printf("��������: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int assignment7_1(void)
{
	int Fnum;;
	int cdiff;


	printf("ù ��° ��? ");
	scanf(" %d", &Fnum);

	printf("����? ");
	scanf(" %d", &cdiff);

	getCD(Fnum, cdiff);

	return 0;

}


int main()
{
	assignment7_1();
	
	return 0;
}