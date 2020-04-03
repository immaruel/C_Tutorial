#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
    automatic storage class
    - 블록을 벗어나면 스택반납, 연결상태 없음
    - 블록이나 funciton header 에서는 변수 선언
*/

void func(int k)
{
    int i = k * 2;
    print("i %lld\n", (long long)&i);
}
int main()
{
    auto int a;
    a = 1024;
    //printf("%d\n", a);
    auto int b = a *3;

    int i = 1;
    int j = 2;
    print("i %lld\n", (long long)&i);
    {
        int i = 3; // name hiding
        printf("i %lld\n", (long long)&i);

        int ii = 12;

        printf("j = %d\n",j); // j = 2 값 출력
    }
    // ii 값은 영향을 주지 블록을 벗어나면 영향을 주지 못함

    printf("i %lld\n", (long long)&i);

 
    func(5);

}
