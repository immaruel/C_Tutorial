#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.141592f // 기호적상수 설정  
#define AI_NAME 'Jarvis'

int main()
{
	float radius, area, circum;
	
	printf("I'am %s.\n", AI_NAME); 
	printf("Input radius\n");
	

	scanf("%f", &radius);
	
	area = PI * radius * radius; // area = pi*r*r
	circum = 2.0f * PI * radius ; // circum = 2pi * r
	
	printf("Area is %f\n", area);
	printf("Circum is %f\n", circum);
	 
	return 0;  
}
