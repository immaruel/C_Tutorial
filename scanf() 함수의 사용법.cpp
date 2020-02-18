#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<inttypes.h> //intmax_t

int main()
{
	// multiple inputs with blank separators
	
	int i;
	float f;
	char str[30];
	scanf("%d %f %s", &i, &f, str);
	printf("%d %f %s\n", i, f, str);
	
	// 문자 character 
	char c;
	scanf("%c", &c);
	printf("%i\n", c); // asckll 코드로 출력 
	
	// unsigned as signed
	unsigned i;
	scanf("%i", &i);
	printf("%i\n", i);
	
	// unsigned as unsigned
	unsigned i2;
	scanf("%i", &i2);
	printf("%i\n", i2);
	
	// floating point numbers
	//1 for double for %f, %e, %E, %g
	double d = 0.0;
	scanf("%lf", &d);
	printf("%f\n", d);
	
	// width
	char str[30];
	scanf("%5s", str);
	printf("%s\n", str);
	
	// modifier
	char i;
	scanf("%hhd", &i);
	printf("%i\n", i);
	
	// integer with characters
	int i;
	scanf("%i", &i);
	printf("%i\n", i);
	
	// j modifier
	intmax_t i;
	scanf("%ji", &i);
	printf("%ji",i);
	
	
	return 0;	
}
