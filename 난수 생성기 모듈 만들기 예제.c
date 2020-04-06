#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h> // srand( ) 랜덤넘버 생성 함수
#include<time.h> // 시간함수

/*
        rand() // 랜덤함수 (난수)
        - 0 to RAND_MAX(typically INT_MAX)
        - defined in stdlib.h 
*/

int main()
{
    srand(1); // random seed이 1로 고정되어있음
    //srand((unsigned int)time(0)); // 씨드값 볌화시키기
   for (int i = 0; i < 10; ++i)
   {
       printf("%d\n", rand());
       //printf("%d\n", rand( ) %6 +1);
    }

    unsigned int next = 1;
    

    //난수값 생성 알고리즘
    for (int i = 0; i < 10; i++)
    {
        next = next * 1103515245 + 1234; // overflow 이용
        next = (unsigned int)(next / 65536) % 32768; // 음수가 나오지 못하기 위한 설정
        printf("%d\n", (int)next);
    }

    return 0; 
}
