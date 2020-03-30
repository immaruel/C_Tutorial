#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /* Array of character strings*/

    const char* mythings[5] = {
        "Dancing in the rain",
        "Counting apples",
        "Watching movies with friends",
        "Writing sad letters",
        "Studying the C language",
    }; // 1차원 배열

    char yourthings[5][40] = {
        "Studying the C++ language",
        "Eating",
        "Watching Neflix",
        "Walking around till dark",
        "Deleting spam emails"
    }; // 2차원 배열

    const char* temp1 = "Dancing in the rain";
    const char* temp2 = "Studying the C++ language";

    printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1); // 같은 주소값 출력
    printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2); // 다른 주소값 출력
    //printf(" %u %u\n", (unsigned)&yourthings[0][0], (unsigned)temp2);
    printf("\n");

    printf("%-30s %-30s\n", "My Things", "Your Things : ");
    for (int i = 0; i < 5; i++)
        printf("%-30s %-30s\n", mythings[i], yourthings[i]); // 줄맞춤

    printf("\nsizeof mythings: %zd, sizeof your yourthings : %zd\n",
        sizeof(mythings), sizeof(yourthings));

    for (int i = 0; i < 100; i++)
        printf("%c", mythings[0][i]);
    printf("\n");
    printf("\n");

    for (int i = 0; i < 200; i++)
        printf("%c", (int)yourthings[0][i]);
    printf("\n");
    printf("\n");

    for (int i = 0; i < 200; i++)
        printf("%c",yourthings[0][i]);
    printf("\n");
    printf("\n");
}
