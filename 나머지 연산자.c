#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int seconds = 0, minutes = 0, hours = 0;
	
	printf("Input seconds : ");
	scanf("%d", &seconds);
	
	while( seconds >= 0 )
	{
		minutes = seconds / 60;
		seconds %= 60;
		
		hours = minutes / 60;
		minutes %= 60;
		
		printf("%d hours, %d minutes, %d second\n", hours, minutes, seconds);
		
		printf("Input seconds : ");
		scanf("%d", &seconds);
		
		printf("good bye\n");
	}
	return 0;
	
}
