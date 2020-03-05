#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{	
	
	int c;
	while((c = getchar()) != EOF) // EOF : end of file
		putchar(c);	
		
	// stream
	while(1)
	{
		c = getchar();
		printf("%d\n",c) // 입력된 문자의 아스키 코드 출력
		if(c == EOF)
			break; 
	}
}
