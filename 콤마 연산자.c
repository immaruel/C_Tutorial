#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	// ex -1
	int n, nsqr = 0; 
	for(int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
		printf("%d %d\n", n, nsqr);
	
	// ex -2 	
	int x, y, z;
	z = x = 1, y = 2;
	printf("x = %d, y = %d, z = %d\n", x, y, z); // (x , y, z) = (1, 2, 1)
	z = (x = 1), (y = 2);
	printf("x = %d, y = %d, z = %d\n", x, y, z); // (x , y, z) = (1, 2, 1)
	z = ((x = 1), (y = 2));
	printf("x = %d, y = %d, z = %d\n", x, y, z); // (x , y, z) = (1, 2, 2) 
	
	// ex =3
	int my_money = (123, 456);
	printf("%d\n", my_money);  // ½ÇÇà°ª = 456 
	
	return 0;
	
}
