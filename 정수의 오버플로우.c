#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main() 
{
	unsigned int u_max = UINT_MAX ;
		
	char buffer[33];
	_itoa(u_max, buffer, 2); // 2���� ���·� ��ȯ 
	
	printf("decimal : %u\n",u_max);
	printf("binary: %s\n", buffer); // 2���� ���·� ��� 
	return 0;
}
