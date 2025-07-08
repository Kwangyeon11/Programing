// 25. 07. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_element()
{
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int key, num;
	int	found = 0;

	printf("배열: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("찾을 값? ");
	scanf(" %d", &key);

	for (int i = size -1; i >= 0; i--)
	{
		if (arr[i] == key)
		{
			found = 1;
			num = i;
			break;
		}
	}
	if (found == 1)
		printf("%d는 %d번째 원소입니다.\n", key, num);
	else
		printf("해당하지 않는 원소입니다.\n");
}

int main()
{
	find_element();

	return 0;
}