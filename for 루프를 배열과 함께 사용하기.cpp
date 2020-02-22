#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5

int main()
{ 
	// ex - 1 
	int i1 = 0;
	int i2 = 1;
	int i3 = 2;
	
	printf("%d\n", i1);
	printf("%d\n", i2);
	printf("%d\n", i3);
	
	
	// ex - 2	
	int my_arr[SIZE];
	
	for(int i = 0; i < SIZE; i++)
		my_arr[i] = i; 
		
	
	for(int i = 0; i < SIZE; i++)
		printf("%d", my_arr[i]); 
		
	int numbers[SIZE];
	int sum = 0;
	int i;
	
	for(int i = 0; i < SIZE; i++)
	{
		printf("Enter 5 numbers : ");
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}
	
	printf("ЦђБе = %d\n", sum/SIZE );
	
	
}
