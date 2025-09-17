// 25.09. 17 in lab

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void print_arr(double arr[], int size);
void print_arr2(double* arr, int size);

void* swap_double(double* x, double* y);
int swap_double_arr();
int compare_ints(const void* e1, const void* e2);

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
void test_function_pointer();
void test_arr();

void* swap_double(double* x, double* y) {

	if (x == NULL || y == NULL) {
		return NULL;
	}

	double temp = *x;
	*x = *y;
	*y = temp;

}

int swap_double_arr() {

	double a = 3.14;
	double b = 5.12;

	printf("������ : %.2f %.2f\n", a, b);

	double* presult = (double*)swap_double(&a, &b);
	if (presult == NULL) {
		printf("�߸��Ǿ���\n");
	}
	else {
		printf("������ : %.2f %.2f\n", a, b);
	}

	presult = (double*)swap_double(NULL, &b);
	if (presult == NULL) {
		printf("�߸��Ǿ���\n");
	}
	else {
		printf("������ : %.2f %.2f\n", a, b);
	}

	return 0;
}

int compare_ints(const void* e1, const void* e2) {
	const double* p1 = (const double*)e1;
	const double* p2 = (const double*)e2;

	return (*p1 - *p2);
}

void print_arr(double arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}
/* ���: 1���� �Ǽ� �迭�� �Է� �޾� �ֿܼ� ���
   �Լ���: print_arr
   �Է�: double *arr
   ���: �͹̳ο� �迭�� ������ �̻ڰ� ���
   ��ȯ: x
*/

void print_arr2(double* arr, int size) {

	for (int i = 0; i < size; i++, arr++)
	{
		printf("%lf ", *arr);
	}
	printf("\n");
}


double add(double a, double b) {

	return a + b;
}

double sub(double a, double b) {

	return a - b;
}

double mul(double a, double b) {

	return a * b;
}

void test_function_pointer() {

	double (*pfunc)(double, double) = NULL;
	double result1 = 0.0;

	pfunc = add;
	printf("add(3, 4) = %f\n", (*pfunc)(3.0, 4.0));

	result1 = (*pfunc) (3.0, 4.0); //7
	printf("add(3, 4) = %f\n", result1);

	pfunc = mul;
	printf("(*pfunc)(3, 4) = %f\n", (*pfunc)(3.0, 4.0));


}

void test_arr() {

	double da[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	printf("ù ��° ���: ");
	print_arr(da, SIZE);

	printf("�� ��° ���: ");
	print_arr2(da, SIZE);

}

int main() {

	// swap_arr();
	//test_arr();

	test_function_pointer();

	return 0;
}