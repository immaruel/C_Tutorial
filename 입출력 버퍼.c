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
		printf("%d\n",c) // �Էµ� ������ �ƽ�Ű �ڵ� ���
		if(c == EOF)
			break; 
	}
}
