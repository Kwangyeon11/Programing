/*   ���ϸ�: Assignment03_4.c
    * ����: PA04. ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.03
    */

#include <stdio.h>

double calcEnergy(int power, int shift);
void assignment04(void);


double calcEnergy(int power, int shift)
{
    return power * shift;
}

void assignment04(void)
{
    int power, shift;
    double work;

    printf("��(N)? ");
    scanf_s(" %d", &power);

    printf("�̵��Ÿ�(m)? ");
    scanf_s(" %d", &shift);

    work = calcEnergy(power, shift);

    printf("���� ��: %.2f J\n", work);
}
int main()
{
    assignment04();

    return 0;
}
