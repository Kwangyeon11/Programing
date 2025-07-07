// 25.07.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void cal_fee(void);
int truncate_fee(int fee, int index);

int truncate_fee(int fee, int index) // n자리 이하 절사 함수
{
	int factor = 1;
	for (int i = 0; i < index; ++i)
		factor *= 10;
	
	return (fee / factor) * factor; // 핵심 코드
}


void cal_fee(void)
{
	int fee;
	int index;
	

	printf("금액? ");
	scanf(" %d", &fee);

	printf("절사단위 (10의 지수승)? ");
	scanf(" %d", &index);

	double result = pow(10, index); // x의 n제곱을 구하기 위한 함수 pow(x, n)
	
	printf("금액(%.0f원 미만 절사): %d", result, truncate_fee(fee, index));

	return;

}

int main()
{
	cal_fee();

	return 0;
}