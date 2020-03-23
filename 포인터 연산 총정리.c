#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int arr[5] = { 100,200,300,400, 500 };
    int* ptr1, * ptr2, * ptr3;

    ptr1 = arr;
    
    printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

    ptr2 = &arr[2];

    printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

    ptr3 = ptr1 + 4;

    printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

    printf("%td\n", ptr3 - ptr1); // t 는 포인터 차이

    ptr3 = ptr3 - 4;

    printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

    ptr1++;
    ptr1--;
    --ptr1;
    ptr1--;

    if (ptr1 == ptr3)
        printf("same\n");
    else
        print("different\n");

    double d = 3.14;
    double* ptr_d = &d;
    if (ptr1 == ptr_d)
        printf("same\n");
    else
        printf("different\n");




}

