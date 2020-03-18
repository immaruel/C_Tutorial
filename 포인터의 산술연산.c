#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int* ptr = 0;

    printf("%p %lld\n", ptr, (long long)ptr);

    ptr+=3;

    printf("%p %lld\n", ptr, (long long)ptr); // int 일 경우 +=3되면 12이 증가되어 출력됨 , char 일경우 +=3되면 3이 증가되어 출력됨

    int arr[10];
    int* ptr1 = &arr[3], * ptr2 = &arr[5];

    int i = ptr2 - ptr1; // 포인터 끼리 차는 배열 주소 차이

    printf("%p %p %d\n", ptr1, ptr2, i);

    return 0;
    
}
