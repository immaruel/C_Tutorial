#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc(동적할당)

void test_function()
{
    int j;
    printf("Stack high \t%llu\n", (unsigned long long) & j);
}

int main()
{
    /* Array versus Pointer*/
    const char* ptr2 = "I am a string!.";
    const char* ptr3 = "I am a string!.";
    const char* ptr4 = "I am a string!!!!!!!!!.";
    const char ar1[] = "I am a string!.";
    const char ar2[] = "I am a string!.";
    const char ar3[] = "I am a string!!!!.";

    printf("rodata low \t%llu %llu %llu %llu\n",
        (unsigned long long)ptr2, (unsigned long long)ptr3, (unsigned long long)ptr4,
        (unsigned long long)"I am a string!.");

    printf("stack high \t%llu %llu %llu %llu\n",
        (unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3);


        printf("stack high \t%llu %llu %llu \n",
            (unsigned long long)&ptr2, (unsigned long long)&ptr3, (unsigned long long)&ptr4);

    //ar1++; // 에러 발생
        ptr2++;
        puts(ptr2);


        /*배열과 포인터 차이*/

        char heart[] = "l love Kelly!";
        const char* head = "I love Kelly!";  // 문자열 자체를 가르키는 포인터 이기에 나중에 재지정 불가 따라서 const 권장!

        for (int i = 0; i < 6; i++) // 배열
            putchar(heart[i]);
        putchar('\n');

        for (int i = 0; i < 6; i++) // 포인터1
            putchar(*(heart + i));
        putchar('\n');

        while (*(head) != '\0') // 포인터2
            putchar(*(head++));

        putchar('\n');
        /* 포인터 복사하기*/
        const char* str1 = "when all the lights are low";
        const char* copy; // 복사

        copy = str1;

        printf("%s %p %p\n", str1, str1, &str1);
        printf("%s %p %p\n", copy, copy, &copy); // 복사되었어도 주소는 다름

        return 0;
   
}
