#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    변수 scope
    종류 - block, function, function prototype, file
*/

int g_i = 123; // global variable전역변수 (file scope)
int g_j;
void func1()
{
    g_i++;
}
void func2()
{
    g_i += 2;
}
int main()
{
    int local = 1234;

    func1();
    func2();

    printf
    
}
