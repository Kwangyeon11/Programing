/*   ���ϸ�: Assignment03_10.c
    * ����: PA10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.03
    */

#include <stdio.h>


void assignment10(void);

void assignment10(void)
{
    double dollar;
    double exchange;
    double won;

    printf("USD? ");
    scanf_s("%lf", &dollar);

    printf("��/�޷� ȯ��? ");
    scanf_s("%lf", &exchange);

    won = dollar * exchange;
    printf("KRW %.2f = KRW %.2f", dollar, won);

}
int main()
{
    assignment10();

    return 0;
}