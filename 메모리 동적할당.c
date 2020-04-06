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

    ptr = (double*)malloc(30 * sizeof(double)); // 필요한 할당량 쓰기

    if (ptr == NULL)
    {
        puts("Memory allocation failed");
    }
}
