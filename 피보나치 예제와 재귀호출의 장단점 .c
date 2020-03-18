#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 피모나치 수열 프로그램
int fibonacci(int number);
int fibonacci(int number)
{
    if (number > 2)
        return fibonacci(number - 1) + fibonacci(number - 2); // double recursion
    else
        return 1;
}
int main()
{
    for (int count = 1; count < 13; ++count)
        printf("%d  ", fibonacci(count));
    
    return 0;
}
