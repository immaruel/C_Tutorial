#include<stdio.h>

int main()
{
	//ex -1: goto��  
	int size = 15, cost;
	
	if(size < 10)
		goto a;
	goto b;

a: cost = 50 * size;
b: cost = 100 * size;
	//ex -1 : if-else��
	if (size < 10)
		cost = 50 * size;
	else
		cost = 100 * size;
		
		
	//ex -2 :goto��
	char c;
read: c = getchar();
	putchar(c);
	if(c =='.')goto quit;
	goto read;
quit:
	//ex -2: while��
	while(1) // ���ѷ��� 
	{
		c = getchar();
		putchar(c);
		if( c=='.')break;
	}	
	
	return 0;
}

