#include<stdio.h>
#include<stdbool.h>

int main()
{
	// ex -1
	int temp;
	temp = true ? 1024 : 7;
	printf("%d\n", temp);
	
	temp = false ? 1024 : 7;
	printf("%d\n", temp); 
	
	// ex -2 (조건연산자) 
	int number;
	scanf("%d", &number);
	
	const bool is_even = (number % 2 == 0) ? true : false; 
	
	if(is_even)	 
		printf("even");
		
	else
		printf("odd"); 
		
	// ex -3 (논리연산자)	
	int number;
	scanf("%d", &number);
		
	if(number % 2 == 0) 
		printf("even");
		
	else
		printf("odd"); 
		
	//ex -4
	int a = 1, b = 2;
	int max = (a > b) ? a : b;
	printf("%d\n",max);
	 	
	return 0; 
}
