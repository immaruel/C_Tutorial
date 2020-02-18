#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char [40]; 
	
	printf("What is your favorite fruit?\n");
	scanf("%s",fruit_name); // 문자열은 &를 붙이지 않음 
	
	printf("You like %s!\n", fruit_name);
	
	return 0;
}
