#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STRLEN 81

char* custom_string_input(char* st, int n);

int main()
{
    /*Creating Space */
    //char* name = ""; // 런타임에러 발생, 초기값이 제대로 설정되어있지 않음
    char name[128];
    int result = scanf("%s", name);

    /*gets puts 함수*/
    char words[STRLEN] = "";
    gets(words); //입력
    //gets_s(words, sizeof(words));
    //int result = scanf("%s", words);
    printf("START\n");
    printf("%s", words);
    puts(words);//출력(한줄띄기 자동으로 포함됨)
    puts("END.");

    /* fget  fputs 함수*/
    char words[strlen] = "";
    fgets(words, strlen, stdin); // 자동줄바꿈 안해줌

    int i = 0;
    while (words[i] != '\n' && words[i] != '\0')
        i++;
    if (words[i] == '\n')
        words[i] = '\0';

    fputs(words, stdout);
    fputs("END", stdout);


    /*Small array*/
    char small_array[5];
    puts("Enter long strins:");
    fgets(small_array, 5, stdin);
    //printf("%p\n", small_buffer);
    //printf("%p\n", fgets(small_buffer, 5, stdin));
    fputs(small_array, stdout);


    /*입력하는 메모리가 작은 경우 */
    char small_array[5];
    puts("enter long strings : ");
    fgets(small_array, 5, stdin);
    //printf("%p\n", small_buffer);
    //printf("%p\n", fgets(small_buffer,5,stdin));
    fputs(small_array, stdin); // 1234 출력됨 : 마지막 \0 포함해서 5개

    /* 반복해서 출력하기 */
    char small_array[5];
    puts("enter long strings : ");
    while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
        fputs(small_array, stdout);
        // puts(small_array);

    /* scanf() */
    char str1[6], str2[6];
    int count = scanf("%5s %5s", str1, str2);
    //int count = scanf("%6s  %6s", str1, str2);
    //int count = scanf_s("%5s  %5s", str1,6, str2,6);
    printf("%s|%s\n", str1, str2);

}

