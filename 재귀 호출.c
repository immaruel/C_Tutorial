#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void my_func(int);

int main()
{
	 my_func(1); 

	 return 0;
} 
void my_func(int n)
{
	printf("level %d, address of variable n = %p\n",n, (int)& n);
	
	if ( n <= 4)
		my_func(n + 1); // ��°��� 5�� �ɋ� ���� ��� �ݺ��� �� �ٽ� ���������� ��͵�  
		
		
	printf("level %d, address of variable n = %p\n",n, (int)& n); // ���ƿ��� ��� ��� (���ȣ�� ) 
		
		
}
