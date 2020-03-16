#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_min(int, int);
int main()
{
    int i1, i2;
    while (1)
    {
        printf("input two integers : ");
        if (scanf("%d %d", &i1, &i2) != 2) break;

        int lesser = int_min(i1, i2);
        printf("the lesser is %d\n", lesser);
    }
}
int int_min(int i, int j)
{
    int min;
    // 방법 1
    if (i < j)
        min = i;
    else
        min = j;
    return min;
    // 방법 2
    return (i < j) ? i : j;

    // 방법 3
    if (i < j)
        return i;
    else
        return j;
     
}