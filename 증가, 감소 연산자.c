#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	// ex-1
	int i = 1, j = 1;
	int i_post, pre_j;
	
	i_post = i++;
	pre_j = ++j;
	
	printf("%d %d\n", i, j);
	printf("%d %d\n", i_post, pre_j); 
	
	// ex-2
	int i = 3;
	int l = 2 * --i;
	printf("%d %d\n", i, l);
	
	i = 1;
	l = 2* i--;
	printf("%d %d\n", i, l); 
	

	return 0;
}
