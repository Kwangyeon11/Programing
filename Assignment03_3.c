/*   ���ϸ�: Assignment03_3.c
    * ����: PA03. ���ɰ� ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.02
    */

#include <stdio.h>

double calcPositionEnergy(int weight, int height);
void assignment0303(void);


double calcPositionEnergy(int weight, int height)
{
    const double g = 9.8;
    return weight * g * height;
}

void assignment0303(void)
{
    int weight, height;
    double ga;

    printf("����(kg)? ");
    scanf_s(" %d", &weight);

    printf("����(m)? ");
    scanf_s(" %d", &height);

    ga = calcPositionEnergy(weight, height);

    printf("��ġ ������: %f J\n", ga);
}
int main()
{
    assignment0303();

    return 0;
}
