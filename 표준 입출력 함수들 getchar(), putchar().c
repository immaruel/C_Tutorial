#include<stdio.h> // getchar(), putchar()
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	//ex -1 : 문자 변환하기 
	/*char ch;
	
	while((ch = getchar()) != '\n')
	{
		if(ch == 'f' || ch == 'F')
			ch = 'x';
			
		putchar(ch);
	}
	putchar(ch);
	
	//ex -2 : 숫자를 *로 변환하기 
	char ch;
	
	while((ch = getchar()) != '\n')
	{
		//for(int i = '0'; i <= '9'; ++i)
			if(ch >= '0' && ch <= '9')
				ch = '*';
			
		putchar(ch);
	}
	putchar(ch);*/
	
	//ex -3 : 소문자를 대문자로 변환하기 
	
	char ch;
	while((ch = getchar() != '\n'))
	{
		if( ch >= 'a' && ch <= 'z') // 'A' = 65, 'a' = 97
			ch -= 'a' - 'A'; // 'a' - 'A ' == 32
		else if( ch >= 'A' && ch <= 'Z') // 'A' = 65, 'a' = 97
			ch += 'a' - 'A';
	} 



}
