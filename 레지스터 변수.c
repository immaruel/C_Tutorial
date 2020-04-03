#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 엠베디드 시스템에서 쓰임

void temp(register int r)
{
    //do something with r
}
int main()
{
    register int r;
    r = 123;

    //printf("%p\n", &r);
    int* ptr = &r;  // 오류 발생! 메모리가 아닌 레지스터에 저장 object가 저장되므로 주소를 가져올수 없음

    return 0;
}
