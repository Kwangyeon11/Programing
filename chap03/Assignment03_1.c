/*   ���ϸ�: Assignment03_1.c
    * ����: PA01. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.03
    */

#include <stdio.h>

void assignment01(void);

void assignment01(void)
{
    int a;
    int len;
    int area;
   

    printf("�� ���� ���� ? ");
    scanf_s(" %d", &a);

    len = 4 * a;
    area = a * a;


    printf("���簢���� ����: %d\n", area);
    printf("���簢���� �ѷ�: %d\n", len);
}
int main()
{
    assignment01();

    return 0;
}
