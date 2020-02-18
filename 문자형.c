#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char c = 'A';
	char d = 65;
	
	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);
	
	char a = '\a';
	printf("%c", a);
} 
