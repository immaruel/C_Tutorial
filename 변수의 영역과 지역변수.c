#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);
int int_max(int i, int j)
{
    int m; // stack frame
    m = i > j ? i : j;
    return m;
}
int main()
{
    int a; // 지역변수
    int b = 9;
    a = int_max(1, 2);

    printf("%d\n", a);
    printf("%p\n", &a);
    {
        a = int_max(4, 5);

        printf("%d\n", a);
        printf("%p\n", &a);

        int b = 123;
    }
    printf("%d\n", a);
    printf("%p\n", &a);

    printf("%d\n", b);
    printf("%p\n", &b);
}
