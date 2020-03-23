#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    double PI = 3.14159;
    //const double PI = 3.14159;  불가
    PI = 2.14159;

    int  arr[5] = { 1,2,3,4,5 };
    arr[1] = 123;

    int  arr2[5] = { 1.0, 2.0, 3.0 };
    arr2[0] = 100.0;

    double* pd = arr2;
    *pd = 3.0; // 동일한 값 : pd[0] = 3.0; arr2[0] = 3.0;
    pd[2] = 1024.0; //  동일한 값 : arr2[2] = 1024.0;

    printf("%f %f", pd[2], arr2[2]);

    pd++; // 증감은 const여도 가능

    printf("%f %f", pd[2], arr2[2]);

    return 0;



}
