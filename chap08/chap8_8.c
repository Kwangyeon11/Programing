// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void fill_array()
{
	int arr[SIZE] = { 0 };
	int* p = arr;
	int element;
	
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &element);

	int i;
	for (i = 0; i < SIZE; i++)
	{
		*(p + i) = element;
	}
	
	printf("배열: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

}

int main()
{
	fill_array();

	return 0;
}