#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

    printf("%u\n", (unsigned)arr2d); // 같은주소1
    printf("%u\n", (unsigned)arr2d[0]); // 같은주소1
    printf("\n");

    printf("%u\n", (unsigned)*arr2d); // 같은주소1
    printf("%u\n", (unsigned)&arr2d[0]); // 같은주소1
    printf("%u\n", (unsigned)&arr2d[0][0]); // 값
    printf("%u\n", (unsigned)arr2d[0][0], **arr2d);// 값
    printf("\n");

    printf("%u\n", (unsigned)(arr2d + 1)); // 같은주소2
    printf("%u\n", (unsigned)(&arr2d[1])); // 같은주소2
    printf("%u\n", (unsigned)(arr2d[1])); // 같은주소2
    printf("%u\n", (unsigned)(*(arr2d+1))); // 같은주소2
    printf("%u\n", (unsigned)(&arr2d[0] + 1)); // 같은주소2
    printf("%u\n", (unsigned)(&arr2d[1][0])); // 같은주소2

    printf("%f\n", *(*(arr2d + 1) + 2));
    printf("\n");

    for (int j = 0; j < 2; ++j)
    {
        prinitf("[%d] = %u, %u\n", (unsigned)(arr2d[j]), (unsigned)*(arr2d + j));

        for (int i = 0; i < 4; ++i)
        {
            printf("[%d][%d] = %f, %f\n", j, i, arr2d[j][i], *(*(arr2d + j) + i));
            *(*(arr2d + j) + i) += 1.0f;

        }
    }
    printf("\n");
















}
