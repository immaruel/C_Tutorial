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
		my_func(n + 1); // 출력값이 5가 될떄 까지 계속 반복한 후 다시 원래값으로 재귀됨  
		
		
	printf("level %d, address of variable n = %p\n",n, (int)& n); // 돌아오는 경로 출력 (재귀호출 ) 
		
		
}
