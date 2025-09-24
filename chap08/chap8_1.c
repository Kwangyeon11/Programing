// 24. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_element()
{
	double x[3] = { 0 };

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("x[%d]ÀÇ ÁÖ¼Ò: %8p\n", i, x + i);
	}
}

int main()
{
	print_element();
	
	return 0;

}


