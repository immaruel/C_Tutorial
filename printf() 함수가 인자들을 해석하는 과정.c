#include<stdio.h>

int main()
{
	float n1 = 3.14;    // 4 bytes
	double n2 = 1.234;  // 8 bytes
	int n3 = 1024;      // 4 bytes
	
	printf("%f %f %d\n", n1, n2, n3);
	
	//Note the warnings in output window (잘못 출력된 예시) 
	printf("%d %d %d\n", n1, n2, n3);      //4, 4, 4,(N, N, Y)
	printf("%11d %11d %d\n", n1, n2, n3);  //8, 8, 4,(N, N, Y)
	printf("%f %d %d\n", n1, n2, n3);      //8, 4, 4,(Y, N, Y)
	printf("%f %11d %d\n", n1, n2, n3);    //8, 8, 4,(Y, N, Y)
	
	return 0;
}
