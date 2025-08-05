// 25. 08. 05 (malloc(2차원 배열))

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** create_2d_array(int rows, int cols) // 핵심
{
    int** arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) return NULL;

    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (arr[i] == NULL) return NULL;
    }
    return arr;
}

void fill_2d_array_random(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 10;
}

void print_2d_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum1 = 0;
        for (int j = 0; j < cols; j++)
        {
            sum1 += arr[i][j];
            printf("%3d ", arr[i][j]);
        }
        printf("==>%4d\n", sum1);
    }
    printf("------------------------------------\n");
    for (int j = 0; j < cols; j++)
    {
        int sum2 = 0;
        for (int i = 0; i < rows; i++)
        {
            sum2 += arr[i][j];
        }
        printf("%3d ", sum2);
    }
    printf("\n");
}

void free_2d_array(int** arr, int rows) // 핵심
{
    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);
}

int main()
{
    int rows, cols;

    printf("배열의 행 크기? ");
    scanf("%d", &rows);
    printf("배열의 열 크기? ");
    scanf("%d", &cols);

    srand((unsigned int)time(NULL));

	int** my_array = create_2d_array(rows, cols); // 핵심
    if (my_array == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    fill_2d_array_random(my_array, rows, cols);

    print_2d_array(my_array, rows, cols);

	free_2d_array(my_array, rows); // 핵심

    return 0;
}