/*   ���ϸ�: Assignment03_7.c
    * ����: PA07. �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.03
    */

#include <stdio.h>


void assignment07(void);

void assignment07(void)
{
    double x, y, z;

    printf("�Ǽ�? ");
    scanf_s("%lf", &x);

    y = x * x;
    z = x * x * x;

    printf("����: %e\n", y);
    printf("������: %e", z);

}
int main()
{
    assignment07();

    return 0;
}