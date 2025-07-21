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
            printf("해당 원소가 이미 [%d]에 존재합니다.\n", i);
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
    // while(1) or for ( ; ; )에 break 조건을 추가하여 무한 루프를 방지하는 것보다 간결함
    {
        printf("배열에 추가할 원소? ");
        if (scanf("%d", &element) != 1) {
            printf("잘못된 입력입니다.\n");
            while (getchar() != '\n');
            continue;
        }

        if (add_to_multiset(arr, count, element)) // return == 1 or 0으로 성공/ 실패인 경우
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