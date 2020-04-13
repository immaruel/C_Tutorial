#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dummy Output\n");

    {
        int n = 10000000; // 일부러 큰 메모리 할당
        int* ptr = (int*)malloc(n * sizeof(int)); // 4억 bytes 할당

        if (!ptr) // if(ptr == NULL)
        {   
            printf("동적할당 실패");
            exit(EXIT_FAILURE);
        }
        for (int i = 0; i < n; ++i)
            ptr[i] = i + 1;

        free(ptr); // 메모리 돌려주기
        ptr = NULL;
    }

    printf("Dummy Output\n");
}
