#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int number;
	
	printf("input a positive integer : ");
	scanf("%d", &number);
	
	if(number %2 == 0)
		printf("even");
	else
		printf("odd");
}
