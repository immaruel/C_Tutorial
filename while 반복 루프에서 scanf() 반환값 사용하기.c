#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num, sum = 0;
	int status; // scanf�� ��ȯ������ status ��� : �Է¹��� ������ ������ return ������ ������
	             
	
	printf("Enter an integer (q to quit) :");
	
	status = scanf("%d", &num); // ���� ������ �ϳ� �Է��ϸ� '1'�� �ν��ϰ� ���ڴ� �Է��ϸ� �ν����� ���ϹǷ� '0' 
	
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
		printf("�� ���� = %d\n", sum);
	}
	
	return 0;
	*/
