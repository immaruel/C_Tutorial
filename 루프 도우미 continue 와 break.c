#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	// continue
	for(int i = 0; i < 10; ++i)
	{
		if ( i == 5)
			continue;
		
		printf("%d",i);		
	}	
	
	// break
	for(int i = 0; i < 10 ; ++i)
	{
		if(i == 5)
			break;
		
		printf("%d", i);	
	}
	
	// while & continue
	int count = 0;
	while (count < 5)
	{
		int c = getchar();
		if( c =='a')
			continue;
		putchar(c);
		count++;
	}
	
	// for & continue
	for(int count = 0; count < 10; ++count)
	{
		int c = getchar();
		if( c == 'a')
			continue;
		putchar(c);	
	}
	
	// continue as a placeholder(���ǹ��� �ڸ� ����) 
	while (getchar() != '\n')
		continue; 
	
	// continue ex -1
	char c;
	while((c = getchar()) != '\n')
	{
		if( c == 'a')
			continue;
		putchar(c);
	}
		
	// break ex -1 (���� ����ϴ� ���) 
	while(1) // ���ѷ���
	{
		char c = getchar();
		
		if(c == '.')	
			break;
			
		putchar(c);
	}
	
	// break ex -2 (���� loop��)
	for(int i = 0; i < 10 ; i++)
	{
		for (int j = 0 ; j < 10; j++)
		{
			if(j == 5)
				break;
				
			printf("(%d %d)", i, j);
		}
		printf("\n");
	} 
		
} 
