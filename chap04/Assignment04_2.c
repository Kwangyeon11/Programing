/*   ���ϸ�: Assignment04_2.c
    * ����: PA02. ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.08
    */

#include <stdio.h>


int assignment0402(void);
double celsius(double f);

double celsius(double f)
{
    return (f - 32.0) * (5.0 / 9.0);
}
int assignment0402(void)
{

    double f = 0;

    printf("ȭ���µ�? ");
    scanf_s(" %lf", &f);
    printf("%.2f F = %.2f C", f, celsius(f));

    return 0;
        
}
int main()
{
    assignment0402();
    return 0;

}