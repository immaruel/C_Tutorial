#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h> // 시간함수
#include "my_rand.h" // 직접 낸드함수 만들기


int main()
{
    my_srand((unsigned int)time(0));

    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", my_rand() % 6 + 1);
    }
    return 0;
}
