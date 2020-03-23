#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int n = 5;
    double x;
    x = n;
    int* p1 = &n;
    double* pd = &x;
    // pd = p1; // warning

    int* pt;
    int(*pa)[3];
    int ar1[2][3] = { 3, };
    int ar2[3][2] = { 7, };
    int** p2;

    pt = &ar1[0][0];

    for (int i = 0; i < 6; ++i)
        //printf("%d ", pt[i]); // 같은 문장
        printf("%d ", *(pt + i)); 


    pt = &ar1[0][0];
    pt = ar1[0];
    //pt = ar1; // pt는 2차배열이기 때문에 오류 발생

    pa = ar1; // 원소가 3개인 1차배열
    //pa = ar2; // 오류 발생

    p2 = &pt;
    *p2 = ar2[0];
    //p2 = ar2; // p2는 이중 포인터, ar2는 2차 배열이기때문에 오류발생

    /*Pointer와 const*/
    
    int x = 20;
    const int y = 23;
    int* p1 = &x;
    const int* p2 = &y;
    const int** pp2 = &p1;
    // p1 = p2; //  오류 발생

    // *p2 =123; // 오류 발생

    p2 = p1;
    
    int x2 = 30;
    int* p3 = &x2;
    *pp2 = p3;
    pp2 = &p1;

    /* ex- 좋지 못한 코드 */
    const int** pp2;
    int* p1;
    const int n = 13;
    pp2 = &p1;
    *pp2 = &n;
    *p1 = 10;


    /*C const and C++const */
    const int y;
    const int* p2 = &y;
    //int * p1;
    // p1 = p2; // 오류 발생(in cpp)

}
