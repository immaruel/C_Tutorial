#include<stdio.h>

int main()
{
	
	// ex -1
	int num = 0;
	
	while(num < 5)
	{
		printf("hello world! %d\n", num);
		num++;	
	} 
	
	// ex -2 
	int dan = 0, num = 1;
	printf(" �� ��? ");
	scanf("%d", &dan);
	
	while(num < 10)
	{
		printf("%d x %d = %d\n", dan, num, dan*num);
		num++;
	}
	
	// ex -3
	
	int i = 0;
	int need_line;
	
	printf("�ʿ��� �ٰ��� �Է��϶� : ");
	scanf("%d", need_line);
	
	while(i < need_line)
	{
		printf("Hello World!\n");
		i++;
	}
	
	// ex - 4
	
	int i = 1;
	int num;
	
	printf("�ʿ��� ������ ���� �Է� : ");
	scanf("%d", &num);
	
	while(i <= num)
	{
		printf("%d ", 3 * i);
		i++;
	}

	// ex - 5 (�߸��� �� : 0�� �����̹Ƿ� ������ ������ų�� ����  
	int num, sum = 0;
	int status;
	
	printf("Enter an interger(0 to quit) : "); // 
	status = scanf("%d", &num); 
	
	while(status == 1)
	{
		sum += num;
		
		printf("Enter next interger(0 to quit) : ");
		status = scanf("%d", &num);
	}
	printf("sum = %d\n", sum); 
	
	// ex - 6
	int num, sum =0;
	
	while(num !=0)
	{
		printf("Enter next interger(0 to quit) : ");
		scanf("%d", &num);
		sum += num;
	} 
	printf("������ %d�Դϴ�.", sum);
	
	// ex - 7
	int i = 9;
	int dan;
	
	printf("���ϴ� ���� �Է��Ͻÿ� : ");
	scanf("%d", &dan);
	 
	while(i > 0)
	{
		printf("%d x %d = %d\n",dan, i, dan*i);
		i--;
	}
	
	// ex - 8
	
	int total=0, i=0;
	int num, input;
	
	printf("�Է��� ������ ���� ? ");
	scanf("%d", &num);
	
	while(i++ < num)
	{
		printf("���� �Է� : ");
		scanf("%d", &input);
		total += input;
	}
	
	printf("�Է��� ��� : %f\n ", (double)total / num); 
	
	// ex - 9
	int total = 0, num = 0;
	
	do 
	{
		printf("Enter next interger(0 to quit) :");
		scanf("%d", &num);
		total += num; 	
	}while(num != 0);
	printf("�հ� = %d", total); 
	
	// ex - 10
	int i = 0, sum = 0, num = 0;
	
	while(i < 5)
	{
		while(num <= 0)
		{
			printf("���Է��ϼ��� (%d��°) :", i + 1);
			scanf("%d ", &num);
		}
		sum += num;
		num = 0; 
		i++;
		
	}
	printf("������ %d�̴�. ", sum); 
	
	// ex - 11
	int i = 0;
	int sum = 0;
	
	do
	{
		sum += i;
		i  = i + 2;
		
	}while(i <= 100);
	
	printf("¦���� �� = %d\n", sum);
 
	// ex - 12
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num�� ? ");
	scanf("%d", &num);
	
	for(i=0; i< num+1; i++)
		total += i;
	
	printf("0���� %d���� ������� : %d\n", num, total);

	// ex - 13
	 double total = 0.0;
	 double input = 0.0;
	 int num = 0;
	 
	 for( ; input >= 0.0; )
	 {
	 	total += input;
	 	printf("�Ǽ��Է� (minus to quit) = ");
	 	scanf("%lf", &input);
	 	num++;
	 }
	 printf("��� : %f\n", total/(num-1)); 
	 
	// ex - 14
	 int start=0, end = 0;
	 int result=0;
	 
	 printf("���۰� �� :");
	 scanf("%d %d", &start, &end);
	 
	 for(; start < end ; start++)
	 {
	 	result += start;
	 }
	printf("�հ� : %d\n", result);  

	// ex - 15
	int i, num;
	int total = 1;

	
	printf("���� �Է� : ");
	scanf("%d", &num);
	
	for(i=1; i <= num; i++)
	{
		total = total*i;
	}
	printf("%d! = %d\n", num, total);
	return 0; 
	
}
