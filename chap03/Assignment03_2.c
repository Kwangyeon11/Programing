/*   ���ϸ�: Assignment03_2.c
    * ����: PA02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.03
    */

#include <stdio.h>

void assignment01(void);

void assignment01(void)
{
    int x;
    int y;
    int area;
    int len;

    printf("������ ���� ? ");
    scanf_s(" %d", &x);

    printf("������ ���� ? ");
    scanf_s(" %d", &y);
    
    area = x * y;
    len = (2 * x) + (2 * y);

    printf("���簢���� ����: %d\n", area);
    printf("���簢���� �ѷ�: %d\n", len);
}
int main()
{
    assignment01();

    return 0;
}
