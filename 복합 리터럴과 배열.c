﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define COLS 4

int sum_1d(int arr[], int n); // 1차원 배열을 모두 더하는 함수
int sum_2d(int arr[][COLS], int rows); // 2차원 배열을 모두 더하는 함수

int main()
{
    int a = 1;
    3; // 리터럴= 상징성없는 상수
    3.14f;
    int b[2] = { 3,4 };
    (int[2]){3,4}; // 복합 리터럴

    // int c[2] = (int[2]){3,4} // 오류 발생

    int arr1[2] = { 1,2 };
    int arr2[2][COLS] = { {1,2,3,4}, {5,6,7,8} };


    printf("%d\n", sum_1d(arr1, 2));
    printf("%d\n", sum_2d(arr2, 2));
    printf("\n");

    printf("%d\n", sum_1d((int[2]) { 1,2 }, 2));
    printf("%d\n", sum_2d((int[2][COLS]) { { 1, 2, 3, 4 }, { 5,6,7,8 } },2));
    printf("\n");

    int* ptr1;
    int(*ptr2)[COLS];

}

int sum_1d(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; ++i)
        total += arr[i];
    return total;
}
int sum_2d(int arr[][COLS], int rows)
{
    int total = 0;
    for (int r = 0;r< rows; r++)
        for (int c = 0; c < COLS; c++)
            total += arr[r][c];
    return total;
}