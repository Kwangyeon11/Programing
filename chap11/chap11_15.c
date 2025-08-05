// 25. 08. 05 (realloc)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* extend_arr(int* arr, int* capacity) {
    *capacity *= 2;
    int* new_arr = realloc(arr, (*capacity) * sizeof(int)); // 할당된 메모리가 변경됨 -> 재할당
    if (new_arr == NULL) {
        printf("메모리 재할당 실패\n");
        free(arr);
        exit(1);
    }
    return new_arr;
}

void print_arr(int arr[], int size, int capacity) {
   
    printf("배열의 최대 크기: %d, ", capacity);
    printf("저장된 원소 수: %d\n", size);

    printf("배열: ");
    int sum = 0;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n배열의 합계: %d\n", sum);
}

int main() {
    int capacity = 4;
    int* arr = (int*)malloc(capacity * sizeof(int)); // 1차적 할당
    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    int size = 0;
    int input;

    printf("배열에 추가할 원소? ");
    while (1) {
        scanf("%d", &input);
        if (input == -1) break;

        if (size >= capacity) {
            arr = extend_arr(arr, &capacity); 
        }

        arr[size++] = input; // 핵심
    }

    print_arr(arr, size, capacity);

    free(arr);
    return 0;
}
