#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> // malloc()

int main()
{
	int a = 1;
	int int_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);
	printf("%i\n", int_arr[10000]); 
	
	char c = 'a'; 
	char str1[10] = "Hello";  // + null character
	char str2[10] = { 'H', 'i'};
	
	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);
	

	
	return 0;  
}
