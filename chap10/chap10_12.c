// 25. 07. 30 (미완성 코드)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// 입력 버퍼 정리 함수
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

union mydata {
    uint32_t dword;
    struct {
        uint16_t low;
        uint16_t high;
    } words;
};

union mydata make_dword(uint16_t low, uint16_t high) {
    union mydata data;
    data.words.low = low;
    data.words.high = high;
    return data;
}

void print_union() {
    uint16_t low, high;

    printf("low word? ");
    if (scanf("%hu", &low) != 1) {
        printf("잘못된 입력입니다.\n");
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    printf("high word? ");
    if (scanf("%hu", &high) != 1) {
        printf("잘못된 입력입니다.\n");
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    union mydata result = make_dword(low, high);

    printf("Low  word: 0x%04X\n", result.words.low);
    printf("High word: 0x%04X\n", result.words.high);
    printf("Dword     : 0x%08X\n", result.dword);
}

int main() {
    print_union();
    return 0;
}