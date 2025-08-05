// 25. 08. 05 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 2���� �迭 ���� �Ҵ�
int** create_2d_array(int rows, int cols) 
{
    int** arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) return NULL;

    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (arr[i] == NULL) return NULL;
    }
    return arr;
}

// ���� ������ �迭 ä���
void fill_2d_array_random(int** arr, int rows, int cols) 
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 10;
}

// �迭 ���
void print_2d_array(int** arr, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }
}

// ���� �޸� ����
void free_2d_array(int** arr, int rows) 
{
    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);
}

int main() 
{
    int rows, cols;

    printf("�迭�� �� ũ��? ");
    scanf("%d", &rows);
    printf("�迭�� �� ũ��? ");
    scanf("%d", &cols);

    srand((unsigned int)time(NULL));

    int** my_array = create_2d_array(rows, cols);
    if (my_array == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    fill_2d_array_random(my_array, rows, cols);

    print_2d_array(my_array, rows, cols);

    free_2d_array(my_array, rows);

    return 0;
}