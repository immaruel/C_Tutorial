#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	const double PI = 3.1415926535897932384626433832;
	double guess = 0.0;
	
	printf("Input PI : ");
	scanf("%lf", &guess);
	// while(guess != PI) -> �� PI���� ������ �����ؾ���
	while(fabs(guess - PI > 0.01)) // fabs : ���� 
	{
		printf("Fool! try again.\n");
		scanf("%lf", &guess);	
	} 
	
	printf("good!");
	return 0;
	
}
