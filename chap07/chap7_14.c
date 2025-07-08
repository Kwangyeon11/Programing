// 25. 07. 08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void shuffle_music()
{
	int music[SIZE] = { 0 };
	
	srand(time(NULL));
	printf("¼ÅÇÃ Àü: ");
	for (int i = 0; i < SIZE; i++)
	{
		music[i] = rand() % 100;
		printf("%d ", music[i]);
	}
	printf("\n");

	for (int i = 0; i < SIZE; )
	{
		int num = 0;
		num = rand() % SIZE;
		if (num < i) continue;
		else 
		{
			int temp = 0;
			temp = music[i];
			music[i] = music[num];
			music[num] = temp;
			i++;
		}
	}
	printf("¼ÅÇÃ ÈÄ: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", music[i]);
	}
	printf("\n");
}

int main()
{
	shuffle_music();

	return 0;
}


