#include<stdio.h> // getchar(), putchar()
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	//ex -1 : ���� ��ȯ�ϱ� 
	/*char ch;
	
	while((ch = getchar()) != '\n')
	{
		if(ch == 'f' || ch == 'F')
			ch = 'x';
			
		putchar(ch);
	}
	putchar(ch);
	
	//ex -2 : ���ڸ� *�� ��ȯ�ϱ� 
	char ch;
	
	while((ch = getchar()) != '\n')
	{
		//for(int i = '0'; i <= '9'; ++i)
			if(ch >= '0' && ch <= '9')
				ch = '*';
			
		putchar(ch);
	}
	putchar(ch);*/
	
	//ex -3 : �ҹ��ڸ� �빮�ڷ� ��ȯ�ϱ� 
	
	char ch;
	while((ch = getchar() != '\n'))
	{
		if( ch >= 'a' && ch <= 'z') // 'A' = 65, 'a' = 97
			ch -= 'a' - 'A'; // 'a' - 'A ' == 32
		else if( ch >= 'A' && ch <= 'Z') // 'A' = 65, 'a' = 97
			ch += 'a' - 'A';
	} 



}
