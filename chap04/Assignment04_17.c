/*   ���ϸ�: Assignment04_17.c
	* ����: PA17. 7, 15, 23, 31��° ��Ʈ�� 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �ֱ���
	* ��¥: 2025.4.09
	*/

#include <stdio.h>

int assignment0417(void);

int assignment0417(void)
{

	unsigned int bit = 1;


	int a = bit << 7;
	printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", a, a);

	int b = bit << 15;

	printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", b, b);

	int c = bit << 23;

	printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", c, c);

	int d = bit << 31;

	printf("31�� ��Ʈ�� 1�� ��: %08x %d\n", d, d);


	return 0;

}
int main()
{
	assignment0417();

	return 0;

}