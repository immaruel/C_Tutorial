#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define NUM_ROWS 12
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'

int main()
{
	int r;
	int c;
	
	for(r=0; r < NUM_ROWS; ++r) // outer row loop
	{ 
		for(c = FIRST_CHAR + r; c < FIRST_CHAR + NUM_ROWS; ++c) //inner character loop
		{
			printf("%c",c);
		}
		printf("\n"); 
	}
	
	return 0;
	
}
