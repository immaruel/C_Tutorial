#include<stdio.h>
#include<limits.h>

int main()
{
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123);
	printf("%X\n", 17); // 16진수 
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);

	// Precision	
	printf("%.3d\n", 1024); // 1024
	printf("%.5d\n", 1024); // 01024
	printf("%.3f\n", 123456.1234567); // 123456.123
	printf("%.3f\n", 123456.1235); // 123456.124
	printf("%10.3f\n", 123.4567);  // 123.457 (앞 여백 제외) 
	printf("%010.3f\n", 123.45678);  // 000123.457
	printf("%.5s\n", "ABCDEFGHIJKLMN"); // ABCDE
	printf("%.s\n", "ABCDEFGHIJKLMN"); // 출력 x 

	//lenght
	printf("%hhd %hd %d\n", 257, 257,257); // 257, 257, 257
	printf("%d %11d %11d\n", INT_MAX + 1, INT_MAX + 1, 214748368LL); // overflow
	
	
	
	return 0;
}
