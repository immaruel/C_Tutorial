#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper( ) ,ispunct( )

#define NUM_LIMIT 1024
void ToUpper(char* str) // 소문자를 대문자로 바꿔주는 함수
{
    while (*str)
    {
        *str = toupper(*str);
      /*  if (islower(*str))
            *str = toupper(*str);*/
        str++;
    }
}
int PunctCount(const char* str) // 바뀐 문자갯수 세주는 함수
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}
int main()
{
    char line[NUM_LIMIT];
    char* new_line = NULL;
    fgets(line, NUM_LIMIT, stdin);
    new_line = strchr(line, '\n'); // \n (한줄 띄기)가 나타나는 새로운 줄 찾기
    if (new_line)
        *new_line = '\0';  // 한줄 띄기를 NULL로 바꾸기

    ToUpper(line);
    puts(line);
    printf("%d\n", PunctCount(line));

    return 0;
}
