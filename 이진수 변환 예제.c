#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

 
/*
	10
	10 / 2 = 5, remainder = 0
	5 /2 = 2, remainder = 1
	2 /2 = 1, remainder = 0
	1 /2 = 0, remainder = 1
*/
//같은 기능을 하는 루프, 재귀 함수 
void print_binary(unsigned long num);
void print_binary_loop(unsigned long num);

int main()
{
	unsigned long num = 10;
	
	print_binary(num);
	print_binary_loop(num);
	
	printf("\n");
	
	return 0;	
}

void print_binary(unsigned long num)
{
	int remainder = num % 2;
	
	if( num >= 2)
		print_binary(num /2);
		
	printf("%d", remainder);
	
	return;
}
void print_binary_loop(unsigned long num)
{
	while(1)
	{
		int quotient = num / 2;
		int remainder = num % 2;
		
		printf("%d", remainder);
		
		num = quotient;
		
		if( num == 0) break;
	}
	
	printf("\n");
}
