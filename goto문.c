#include<stdio.h>

int main()
{
	//ex -1: goto문  
	int size = 15, cost;
	
	if(size < 10)
		goto a;
	goto b;

a: cost = 50 * size;
b: cost = 100 * size;
	//ex -1 : if-else문
	if (size < 10)
		cost = 50 * size;
	else
		cost = 100 * size;
		
		
	//ex -2 :goto문
	char c;
read: c = getchar();
	putchar(c);
	if(c =='.')goto quit;
	goto read;
quit:
	//ex -2: while문
	while(1) // 무한루프 
	{
		c = getchar();
		putchar(c);
		if( c=='.')break;
	}	
	
	return 0;
}

