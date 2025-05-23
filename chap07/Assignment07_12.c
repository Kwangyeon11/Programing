/*   ���ϸ�: Assignment07_12.c
     ��  ��: PA12. ����ǥ ���� ���α׷��� �ۼ��Ͻÿ�.
     �ۼ���: �ֱ���
     ��  ¥: 2025.05.23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assigment7_12();
void reserve(char arr[], int count, int sum);

void reserve(char arr[], int count, int sum)
{
    int num[SIZE] = { 0 };  
    int i;

    
    for (i = 0; i < count && sum <= SIZE; i++)
    {
        if (sum <= SIZE) {
            arr[sum - count + i] = 'X';
            num[i] = sum - count + i + 1;
        }
    }

 
    for (i = 0; i < count && i < SIZE; i++)
    {
        printf("%d ", num[i]);
    }
    printf("�� �¼��� �����߽��ϴ�.\n");

    
    printf("���� �¼�: [");
    for (i = 0; i < SIZE; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("]\n");
}

void assigment7_12()
{
    char seat[SIZE] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
    int count;
    int total_booked = 0;

    printf("���� �¼�: [");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %c ", seat[i]);
    }
    printf("]\n");

   
     while (total_booked < SIZE)
    {
        printf("������ �¼���? ");
        scanf("%d", &count);

        reserve(seat, count, total_booked);
        total_booked += count;

    }
}

int main()
{
    assigment7_12();
    return 0;
}