#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    스토리지 duration
    -static storage duration 
    -automatic storage duration
    -allocated storage duraion
    -thread storage duration
*/

void count() // 함수가 끝나면 효력 사라짐
{
    int ct = 0;
    printf("count = %d\n", ct);
    ct++;
}
void static_count() // 프로그램이 끝날 떄 까지 효력 유지, (cf. 다른 의미의 static과 가 차별 주의)
{
    static int ct = 0;
    printf("static count = %d\n", ct);
    ct++;

}
int main()
{
    count();
    count();
    static_count();
    static_count();
}
