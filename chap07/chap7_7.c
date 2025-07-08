// (Öµûú¡¡7Ò´) 07. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void fill_array(int arr[], int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = num;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void print_array()
{
	int num;
	int arr[SIZE] = { 0 };

	printf("¹è¿­ÀÇ ¿ø¼Ò¿¡ ÀúÀåÇÒ °ª? ");
	scanf("%d", &num);

	fill_array(arr, SIZE, num);
	printf("\n");
}

int main()
{
	print_array();

	return 0;
}