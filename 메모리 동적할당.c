#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h> // 동적할당 malloc( ), free( )

int main()
{
    float x;
    char str[ ] = "Dancing with a Star";

    int arr[100];
    /*
        malloc( ) returns a void type pointer.
        void * : generic pointer

        free( ) deallocates the memeory
    */

    double* ptr = NULL;

    ptr = (double*)malloc(30 * sizeof(double)); // 필요한 할당량 쓰기  : 30 x 8 = 240 bytes

    if (ptr == NULL)
    {
        puts("Memory allocation failed"); // 에러메세지

        /*
            exit(EXIT_FAILURE); // return 1; 같은 의미로 문제가 있을시 사용
            exit(EXIT_SUCCESS); // return 0; 같은 의미
        */
        exit(EXIT_FAILURE); // 강제프로그램종료
    }
    printf("before free %p\n", ptr);

    free(ptr);  // 포인터를 다 사용했을 시 반납해야함

    printf("after free %p\n", ptr);

    ptr = NULL; // 항상 붙여주기!

    /* 동적할당 메모리를 배열 처럼 사용하기*/

    int n = 5;
    //...... : n에 대한 다양한값을 동적으로 설정 가능
    ptr = (double*)malloc(n * sizeof(double)); // 5 x 8 =40 bytes 요청

    if (ptr != NULL)
    {
        for (int i = 0; i < n; ++i)
            printf("%f", ptr[i]);
        printf("\n");

        for (int i = 0; i < n; i++)
            *(ptr + i) = (double)i;

        for (int i = 0; i < n; ++i)
            printf("%f", ptr[i]);
        printf("\n");
    }

    free(ptr);
    ptr = NULL;
}
