#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{ 
	int number;
	
	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("Even");
	
	else 
		printf("Odd");
	return 0;
}
