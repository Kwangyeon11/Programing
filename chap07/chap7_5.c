// 25. 07. 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_element()
{
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int key, num;
	int	found = 0;

	printf("�迭: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("ã�� ��? ");
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
		printf("%d�� %d��° �����Դϴ�.\n", key, num);
	else
		printf("�ش����� �ʴ� �����Դϴ�.\n");
}

int main()
{
	find_element();

	return 0;
}