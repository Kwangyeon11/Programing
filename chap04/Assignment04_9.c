/*   ���ϸ�: Assignment04_9.c
    * ����: PA09. �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    * �ۼ���: �ֱ���
    * ��¥: 2025.4.08
    */

#include <stdio.h>


int assignment0409(void);


int assignment0409(void)
{
    int sec;
    int leftsec;
    int min;
    int hour;


    printf("����ð�(��)? ");
    scanf_s(" %d", &sec);
    
    min = (sec % 3600) / 60;
    hour = sec / 3600;
    leftsec = sec - (min * 60 + hour * 3600);
   
    printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, leftsec);
   
    
    return 0;

       
}
int main()
{
    assignment0409();
    return 0;

}