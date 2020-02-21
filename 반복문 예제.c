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
	printf(" 몇 단? ");
	scanf("%d", &dan);
	
	while(num < 10)
	{
		printf("%d x %d = %d\n", dan, num, dan*num);
		num++;
	}
	
	// ex -3
	
	int i = 0;
	int need_line;
	
	printf("필요한 줄갯수 입력하라 : ");
	scanf("%d", need_line);
	
	while(i < need_line)
	{
		printf("Hello World!\n");
		i++;
	}
	
	// ex - 4
	
	int i = 1;
	int num;
	
	printf("필요한 갯수의 정수 입력 : ");
	scanf("%d", &num);
	
	while(i <= num)
	{
		printf("%d ", 3 * i);
		i++;
	}

	// ex - 5 (잘못된 답 : 0도 정수이므로 루프를 중지시킬수 없음  
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
	printf("총합은 %d입니다.", sum);
	
	// ex - 7
	int i = 9;
	int dan;
	
	printf("원하는 단을 입력하시오 : ");
	scanf("%d", &dan);
	 
	while(i > 0)
	{
		printf("%d x %d = %d\n",dan, i, dan*i);
		i--;
	}
	
	// ex - 8
	
	int total=0, i=0;
	int num, input;
	
	printf("입력할 정수의 수는 ? ");
	scanf("%d", &num);
	
	while(i++ < num)
	{
		printf("정수 입력 : ");
		scanf("%d", &input);
		total += input;
	}
	
	printf("입력의 평균 : %f\n ", (double)total / num); 
	
	// ex - 9
	int total = 0, num = 0;
	
	do 
	{
		printf("Enter next interger(0 to quit) :");
		scanf("%d", &num);
		total += num; 	
	}while(num != 0);
	printf("합계 = %d", total); 
	
	// ex - 10
	int i = 0, sum = 0, num = 0;
	
	while(i < 5)
	{
		while(num <= 0)
		{
			printf("재입력하세요 (%d번째) :", i + 1);
			scanf("%d ", &num);
		}
		sum += num;
		num = 0; 
		i++;
		
	}
	printf("총합은 %d이다. ", sum); 
	
	// ex - 11
	int i = 0;
	int sum = 0;
	
	do
	{
		sum += i;
		i  = i + 2;
		
	}while(i <= 100);
	
	printf("짝수의 합 = %d\n", sum);
 
	// ex - 12
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은 ? ");
	scanf("%d", &num);
	
	for(i=0; i< num+1; i++)
		total += i;
	
	printf("0부터 %d까지 덧셈결과 : %d\n", num, total);

	// ex - 13
	 double total = 0.0;
	 double input = 0.0;
	 int num = 0;
	 
	 for( ; input >= 0.0; )
	 {
	 	total += input;
	 	printf("실수입력 (minus to quit) = ");
	 	scanf("%lf", &input);
	 	num++;
	 }
	 printf("평균 : %f\n", total/(num-1)); 
	 
	// ex - 14
	 int start=0, end = 0;
	 int result=0;
	 
	 printf("시작과 끝 :");
	 scanf("%d %d", &start, &end);
	 
	 for(; start < end ; start++)
	 {
	 	result += start;
	 }
	printf("합계 : %d\n", result);  

	// ex - 15
	int i, num;
	int total = 1;

	
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	for(i=1; i <= num; i++)
	{
		total = total*i;
	}
	printf("%d! = %d\n", num, total);
	return 0; 
	
}
