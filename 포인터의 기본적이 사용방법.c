#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	
	a = 123;
	
	int *a_ptr; // * : asterisk
	
	a_ptr = &a; // & : address of operator
	
		printf("%d %d %p\n", a, *a_ptr, a_ptr);
	
	*a_ptr =456; // * : re-direction or de-redirection
	 
		 printf("%d %d %p\n", a, *a_ptr, a_ptr); // a의 주소는 변하지 않음 
	 
	b = *a_ptr;
	 	
	 	printf("%d\n ", b);
	
	*a_ptr = 789;
	
	printf("%d\n",b); // 789 아님 주의(b는 re-direction 불가 )  
	printf("%d %d %p %p\n ", a, *a_ptr, a_ptr,b);
	
	b = 12;
	printf("%d\n ", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);
	
	
	a = 1004;
	printf("%d %d %p\n", a, *a_ptr, a_ptr); // a 에 다른 값은 저장한다고 저장위치 방이 바뀌지 않으므로 그대로 출력됨  
}
