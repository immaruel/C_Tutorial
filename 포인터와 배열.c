#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10];

    int num = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < num; ++i)
        arr[i] = (i + 1) * 100;

    int* ptr = arr; // 배열이름을 포인터처럼 사용

    printf("%p %p %p \n", ptr, arr, &arr[0]); // 같은 주소값이 출력됨

    ptr += 2;

    printf("%p %p %p \n", ptr, arr + 2, &arr[2]); //int형이므로 8이 더해진 주소 출력

    printf("%d %d %d \n", *(ptr + 1), *(arr + 3), arr[3]); // 같은 내용 출력

    printf("%d %d %d \n", *ptr + 1, *arr + 3, arr[3]); // 다른 내용 출력
    
    printf("\n");


    for (int i = 0, *ptr = arr; i < num; ++i)
    {
        printf("%d %d\n", *ptr, arr[i]);
        ptr++;
        printf(" %d %d\n", *(ptr + i), arr[i]);

    }

    return 0;

}
