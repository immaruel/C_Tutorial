#include<stdio.h>

int main()
{
	// ex - 1
	
	int num = 0;
	
	while(num++ < 5)
		printf("hello world\n"); 
		
	// ex - 2
	int i = 1;
	int num;
	
	printf("���ϴ� ���� �Է��ϼ��� = ");
	scanf("%d", &num);
	
	while(i <= 9)
	{
		printf(" %d x %d = %d\n", num, i, num*i);
		i++;
	} 
	
	// ex - 3
	int i = 0;
	int num;
	
	printf("���� �Է� = ");
	scanf("%d", &num);
	
	while(i < num)
	{
		printf("Hello World\n");
		i++;
	} 
	
	// ex - 4
	int i = 0;
	int num = 1;
	
	printf("���� �Է� = ");
	scanf("%d", &num);
	
	while(i < num)
	{
		printf("%d ", 3*i);
		i++;
	} 
	
	// ex - 5
	int num = 1;
	int total = 0;
	
	while( num != 0)
	{
		printf("enter to quit 0 = ");
		scanf("%d", &num);
		total += num;
	}
	printf("���� = %d", total); 
	
	// ex - 6
	int i = 9;
	int dan;
	
	printf("���ϴ� �� �Է� = ");
	scanf("%d", &dan);
	
	while( i > 0)
	{
		printf("%d x %d = %d\n", dan, i, dan * i);
		i--;	
	}
	
	// ex - 7
	int i = 0;
	int num = 0;
	int sum = 0;
	
	while( i < 5 )
	{
		while(num <= 0)
		{
			printf("enter to quit 0 = ");
			scanf("%d", &num);	
		}
		sum += num;
		num=0;
		i++;
	} 
	printf(" ���� = %d", sum);
	

	
	
}
