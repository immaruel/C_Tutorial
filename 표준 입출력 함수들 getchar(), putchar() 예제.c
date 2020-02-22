#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{ 
	char ch;
	
	while(ch != '\n')
	{
		putchar(ch);
		
		ch = getchar();
	}
	
	putchar(ch);
	return 0;
}
