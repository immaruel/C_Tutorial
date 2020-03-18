#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //ex-1
    int a =1234;
    printf("%p\n", &a);
    printf("%d\n", a);

    int* ptr =1234;  //런타임 에러 발생!
    printf("%p\n", ptr);
    printf("%d\n", *ptr); 

    //ex-2
    int* safer_ptr = NULL;

    int a = 123;
    //*safer_ptr = &a;
    int b;
    scanf("%d", &b);

    if (b % 2 == 0)
        safer_ptr = &a;

    if (safer_ptr != NULL)
        printf("%p\n", safer_ptr);

    if (safer_ptr != NULL)
        printf("%d\n", *safer_ptr);


}
