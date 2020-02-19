#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num, sum = 0;
	int status; // scanf의 반환값으로 status 사용 : 입력받은 변수의 갯수를 return 값으로 돌려줌
	             
	
	printf("Enter an integer (q to quit) :");
	
	status = scanf("%d", &num); // 만약 정수를 하나 입력하면 '1'로 인식하고 문자는 입력하면 인식하지 못하므로 '0' 
	
	while(status == 1)
	{
		sum = sum + num;
		
		printf("Enter next integer (q to quit) :");
		status = scanf("%d", &num);
	}
	printf("sum = %d\n", sum);
	
	return 0;
	
}



/*	int a = 0;
	int b = 0;
	int sum = 0;
	
	sum = sum + b;
	
	printf("Enter an integer (q to quit) : %d\n",);
	scanf("%d", &a);
	
	while(b == 1)
	{
		printf("Enter nextinteger (q to quit) :%d\n",b);
		scanf("%d", &b);
		sum = sum + b;
		printf("총 합은 = %d\n", sum);
	}
	
	return 0;
	*/
