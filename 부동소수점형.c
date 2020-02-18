#include<stdio.h>
#include<float.h>

int main()
{
 	printf("%u\n", sizeof(float));
 	printf("%u\n", sizeof(double));
 	printf("%u\n", sizeof(long double));
 	
 	float f = 123.456f; // float형은 뒤에 f를 붙여준다. 
 	double d = 123.456;
 	
 	float f2 = 123.456;
 	double d2 = 123.456f;
 	
 	int i =3;
 	float f3 = 3.f; // == 3.0f
 	double d3 = 3.; // == 3.0
 	
 	float f4 = 1.234e10f; // 1.234 x 10의 10 승  
 	
 	float f5 = 0x1.1p1;
 	double d5 = 1.0625e0;
 	
 	printf("%f %F %e %E\n", f, f, f, f); 
 	printf("%f %F %e %E\n", d, d, d, d); 
 	printf("%a %A\n", f5, f5);  // 16진수 출력 
 	printf("%a %A\n", d5, d5); 
 	return 0;  
} 
