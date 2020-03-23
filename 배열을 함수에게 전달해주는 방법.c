#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//double average(double  *arr1) 함수에서 배열을 받을 땐 포인터로 받는다. (related in 동적할당메모리)
double average(double data_array[], int n)
{
	printf("Size = %zd in function average\n", sizeof(data_array));
	double ave = 0.0;
	for (int i = 0; i < n; ++i)
	{
		ave += data_array[i];
	}
	ave /= (double)n;

	return ave;
}
int main()
{
	double arr1[5] = { 10,13,12,7,8 };
	//double arr2[5] = { 1.8, -0.2, 6.3, 13.9, 20.5 };
	double arr2[3] = { 1.8, -0.2, 6.3 }; // 사이즈가 다름

	printf("Address = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));
	printf("Address = %p\n", arr2);
	printf("Size = %zd\n", sizeof(arr2));

	
	printf(" ave = %f\n", average(arr1, 5));
	printf(" ave = %f\n", average(arr2, 3) );
	
}

//함수의 protype
double average(double* data_array, int n);
double average(double*, int n);
double average(double data_array[], int n);
double average(double [], int n);
