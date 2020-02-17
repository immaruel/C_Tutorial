#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main() 
{
	unsigned int u_max = UINT_MAX ;
		
	char buffer[33];
	_itoa(u_max, buffer, 2); // 2진수 형태로 변환 
	
	printf("decimal : %u\n",u_max);
	printf("binary: %s\n", buffer); // 2진수 형태로 출력 
	return 0;
}
