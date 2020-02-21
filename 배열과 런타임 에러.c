#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define NUM_DAYS 365

int main()
{
	char my_chars[] = "Hello, World";
	
	int daily_temperature[NUM_DAYS];
	double stock_prices_history[NUM_DAYS];
	
	printf("%zd\n", sizeof(stock_prices_history));
	printf("%zd\n", sizeof(double) * NUM_DAYS);
	printf("%zd\n", sizeof(stock_prices_history[0]));
}
