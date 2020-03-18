#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *u, int *v)
{
    int temp = *u;// SWAP
    *u = *v;
    *v = temp;
}
int main()
{
    int a = 123;
    int b = 456;

    swap(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}
