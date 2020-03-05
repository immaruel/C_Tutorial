#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>

int main()
{
	float max = -FLT_MAX; // 실수의 최솟값 
	float min = FLT_MAX;  // 실수의 최댓값  
	float sum = 0.0f;
	float input;
	int n = 0;
	
	while(scanf("%f", &input) == 1)
	{
		if (input < 0.0f || input > 100.0f) continue;   // 0보다 작은 값과  100보다 큰 값 무시하기  
		//max = (input > max) ? input : max;
		//min = (input < min) ? input : min;
		
		if(input > max)
			max = input;
		if(input < min)
			min = input;
		 	
		sum += input;
		n++;
	}
	
	if( n > 0)  // 음수값 못 받게 하기  
	{
		printf(" min = %f, max = %f, ave = %f\n", min, max, sum / n);	
	}
	else
		printf("NO input\n");
}
