#include<stdio.h>
#include<ctype.h>
#define _CRT_SECURE_NO_WARNINGS
#define PERIOD '.'


int main()
{	//ex -1
	/*char ch;
	int count = 0;
	
	while((ch = getchar()) != PERIOD)
	{
		if(ch != '\n' && ch != ' ')	
		count++;
	}
	printf("%d", count); 
	
	//ex -2
	int x =1 , y =2;
	
	if(x++ > 0 && x + y == 4)
		printf("%d %d\n", x, y); // 2 2 
		
	//ex - 3
	
	for(int i = 0; i < 100; ++i)
		if(i >= 10 && i <= 20)
			printf("%d", i);
			
	printf("\n"); */
	
	//ex -4
	for(char c = -128; c < 127; ++c)
		if(c >= 'a' && c <= 'z')
			printf("%c",c);
			

	for(char c = -128; c < 127; ++c)
		if(islower(c)) // 윗 예제와 같은 의미  
			printf("%c",c);
	

	return 0;
}
