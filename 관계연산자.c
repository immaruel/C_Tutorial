#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	const double PI = 3.1415926535897932384626433832;
	double guess = 0.0;
	
	printf("Input PI : ");
	scanf("%lf", &guess);
	// while(guess != PI) -> 위 PI값과 완전히 동일해야함
	while(fabs(guess - PI > 0.01)) // fabs : 절댓값 
	{
		printf("Fool! try again.\n");
		scanf("%lf", &guess);	
	} 
	
	printf("good!");
	return 0;
	
}
