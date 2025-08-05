// 25. 08. 05 (realloc)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* extend_arr(int* arr, int* capacity) {
    *capacity *= 2;
    int* new_arr = realloc(arr, (*capacity) * sizeof(int)); // �Ҵ�� �޸𸮰� ����� -> ���Ҵ�
    if (new_arr == NULL) {
        printf("�޸� ���Ҵ� ����\n");
        free(arr);
        exit(1);
    }
    return new_arr;
}

void print_arr(int arr[], int size, int capacity) {
   
    printf("�迭�� �ִ� ũ��: %d, ", capacity);
    printf("����� ���� ��: %d\n", size);

    printf("�迭: ");
    int sum = 0;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n�迭�� �հ�: %d\n", sum);
}

int main() {
    int capacity = 4;
    int* arr = (int*)malloc(capacity * sizeof(int)); // 1���� �Ҵ�
    if (arr == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    int size = 0;
    int input;

    printf("�迭�� �߰��� ����? ");
    while (1) {
        scanf("%d", &input);
        if (input == -1) break;

        if (size >= capacity) {
            arr = extend_arr(arr, &capacity); 
        }

        arr[size++] = input; // �ٽ�
    }

    print_arr(arr, size, capacity);

    free(arr);
    return 0;
}
