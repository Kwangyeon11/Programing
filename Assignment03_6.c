/*   ���ϸ�: Assignment03_6.c
    * ����: PA06. ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.03
    */

#include <stdio.h>


void assignment06(void);

void assignment06(void)
{
    double area;
    double ext;
    const double M = 0.3025;

    printf("����Ʈ�� ����(��������)? ");
    scanf_s("%lf", &area);

    ext = area * M;
    printf("%.2f �������� = %.2f ��", area, ext);

}
int main()
{
    assignment06();

    return 0;
}