// 25. 07. 19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int add_to_multiset(int arr[], int count, int element)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == element)
        {
            printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", i);
            return 0; 
        }
    }

    if (count < SIZE)
    {
        arr[count] = element;
        return 1;
    }

    return 0; 
}

void print_multiset()
{
    int arr[SIZE] = { 0 };
    int element;
    int count = 0;

	while (count < SIZE)
    // while(1) or for ( ; ; )�� break ������ �߰��Ͽ� ���� ������ �����ϴ� �ͺ��� ������
    {
        printf("�迭�� �߰��� ����? ");
        if (scanf("%d", &element) != 1) {
            printf("�߸��� �Է��Դϴ�.\n");
            while (getchar() != '\n');
            continue;
        }

        if (add_to_multiset(arr, count, element)) // return == 1 or 0���� ����/ ������ ���
        {
            count++;
       
            for (int i = 0; i < count; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
}

int main()
{
    print_multiset();
    return 0;
}