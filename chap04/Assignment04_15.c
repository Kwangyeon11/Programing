/*   ���ϸ�: Assignment04_15.c
    * ����: PA15. ��-�޷� �Ÿű������� ȯ��������� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ�, �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.08
    */

#include <stdio.h>


int assignment0415(void);
double exchangeRate(int deal, int prefer);

double exchangeRate(int deal, int prefer)
{
    const double BANK = 1.75;
    return 0.01 * deal * BANK * (1 - 0.01 * prefer);
}
int assignment0415(void)
{

    int deal, prefer;
    double rate, Dollar, won;


    printf("��/�޷� �Ÿű�����?  ");
    scanf_s(" %d", &deal);

    printf("ȯ�������(0~100%)? ");
    scanf_s(" %d", &prefer);

    rate = deal + exchangeRate(deal, prefer);

    printf("�޷� �� �� ȯ���� %lf�Դϴ�.\n", rate );
    
    printf("������ �޷�(USD)? ");
    scanf_s(" %lf", &Dollar);

    won = Dollar * rate;

    printf("USD %.2f �� �� ==> KRW %.2f ", Dollar, won);

        
    return 0;

}
int main()
{
    
    assignment0415();
    return 0;

}