#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	const int secret_code = 337;
	int guess = 0;
	
	printf("Enter secret code : ");
	scanf("%d\n", &guess);
	
	while(guess != secret_code)
	{
		printf("Enter secret code : ");
		scanf("%d\n", &guess);
	} 
	
	//do while¹®
	do
	{
		printf("Enter secret code : ");
		scanf("%d\n", &guess);
	} while(guess != secret_code)
	
	printf("good!");
	
	return 0;
	
}
