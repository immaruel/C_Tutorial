#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// const로 실수 방지시키기
void print_array(const int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d", arr[i]);
    printf("\n");
}
void add_value(int arr[], int n, const int val) // 배열의 각 원소에 특정값을 더해주는 함수
{
    int i;
    for (i = 0; i < n; i++)
        arr[i] += val;
}
int sum(const int arr[], int n) // 배열 원소들의 합 구하는 함수
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += arr[i] ;
    return total;
}
int main()
{
    int arr[] = { 1, 2,3 ,4,5 };
    const int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, 5);
    add_value(arr , 5, 100);
    print_array(arr, 5);
    
    int s = sum(arr, 5);
    printf("sum is %d\n", s);
    print_array(arr, 5);
    return 0;
}
