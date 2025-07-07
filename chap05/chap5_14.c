// 25.07.02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void crackdown(void);

void crackdown(void)
{
	int min, distance;
	double v, hours;
	
	
	printf("구간 단속 소요 시간 (분)? ");
	scanf("%d", &min);

	printf("구간 단속 주행 거리 (km)? ");
	scanf("%d", &distance);

	hours = min / 60.0; // 실수 / 실수 or 정수 / 실수 → 소수점 결과 유지됨 (분->시간 단위 변환)
	v = distance / hours;

	printf("평균 속력은 %.1f km/h입니다. ", v);

	if (v >= 100)
	{
		printf("구간 단속 과속입니다.");
	} 
	else printf("구간 단속 과속이 아닙니다.");

	return;
}

int main()
{
	crackdown();

	return 0;
}