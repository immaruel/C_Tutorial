#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	// 반올림(round-off error) 
	float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n",b);  // 범위를 벗어나 1이 나와야 하는 데 결과값 0이 출력됨 
	
	// overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100.0f;
	printf("%f\n", max);
	
	//underflow
	float min = 1.401298464e-45F;
	printf("%f\n",min);
	min = min / 100.0f;
	printf("%f\n", min);
	
	return 0;  
} 
