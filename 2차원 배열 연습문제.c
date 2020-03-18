#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3
int main()
{
    double year2016[MONTHS] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    double year2017[MONTHS] = { 13,14,15,16,17,18,19,20,21,22,23,24 };
    double year2018[MONTHS] = { 25,26,27,28,29,30,31,32,33,34,35,36 };

    double temp_data[YEARS][MONTHS] = {
        { 1,2,3,4,5,6,7,8,9,10,11,12 },
        { 13,14,15,16,17,18,19,20,21,22,23,24 },
        { 25,26,27,28,29,30,31,32,33,34,35,36 }
    };

    printf("[Temperature Data]\n");

    printf("Year index : ");
    for (int m = 0; m < MONTHS; ++m)
    {
        printf("\t&d", m + 1);
    }
    printf("\n");

    for (int y = 0; y < YEARS; ++y)
    {
        printf("Year  %d : ", y);
        for (int m = 0; m < MONTHS; ++m)
        {
            printf("\t%.1f", temp_data[y][m]);
        }
        printf("\n");

    }
    printf("\n");
    printf("[Yearly average temperature of 3 years]\n");
    for (int y = 0; y < YEARS; ++y)
    {
        double ave_temp = 0.0;

        for (int m = 0; m < MONTHS; ++m)
            ave_temp += temp_data[y][m];

        ave_temp /= (double)MONTHS;

        printf("Year %d : average temperature = %.1f\n", y, ave_temp);

    }
}
