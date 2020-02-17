#include<stdio.h>

void say_hello(void);


int main()
{
	say_hello();
	return 0;
}

void say_hello(void) // 함수 선언 
{
	printf("Hello, World!\n");
	return;	
}
