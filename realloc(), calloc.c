#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =10;

    int* ptr = NULL;

    // ptr = (int*)malloc(sizeof(int) *n);
    ptr = (int*)calloc(n, sizeof(int));  //calloc()함수는 초기화할 수있음
    if (!ptr)
        exit(1);

    for (int i = 0; i < n; i++)  
        printf("%d", ptr[i]);
    printf("\n");

    /*
        realloc( ) : 다시 할당 받을 때 사용
    */

    for (int i = 0; i < n; ++i)
        ptr[i] = i + 1;

    n = 20;

    int* ptr2 = NULL;
    ptr2 = (int*)realloc(ptr, n * sizeof(int)); //앞 파라미터 ptr : 이미 받은 할당 , 왼쪽 파라미터 : 새로 받고 싶은 할당

    printf("%p %p\n", ptr, ptr2);

    printf("%d\n", ptr[0]);

    if (!ptr2)
        exit(1);
    else
        ptr = NULL;
    
    for (int i = 0; i < n; i++)
        printf("%d   ", ptr2[i]);  // 데이터 복사
    printf("\n");

}
