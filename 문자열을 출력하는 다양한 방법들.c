#define _CRT_SECURE_NO_WARNINGS
#define TEST "A string from #define"
#include <stdio.h>

void custom_put(const char* str)
{
    while (*str != '\0')
        putchar(*str++);
}
int custom_put2(const char* str)
{
    int count = 0;
    while (*str)
    {
        putchar(*str++);
        count++;
    }
    putchar('\n');

    return count;
}
int main()
{
    char str[60] = "String array initialized";
    const char* ptr = "A pointer initialized";

    /*1.  puts( ) : 문장뒤 자동 한줄띄기*/
    puts("String without \\n");
    puts("End");
    puts(TEST);
    puts(TEST + 5);
    puts(&str[3]);
    //puts(str[3]); //error
    puts(ptr + 3);

    /*2.   puts() and fputs()*/
    char line[100];
    while (gets(line))
        puts(line);

    char line[100];
    while (fgets(line, 81, stdin))
        fputs(line, stdout);

    /*3.  printf()*/

    char str[] = "Just do it , do it!";
    printf("%s\n", str);
    puts(str); 

    char input[100] = " ";
    int ret = scanf("%10s", input); //만약 input을 " just do it, do it을 입력하고 엔터를 친다. scanf는 정수 하나, 단어 하나만 입력받는다.
    printf("%s\n", input);// just 만 출력된다
    ret = scanf("%10s", input); 
    printf("%s\n", input); // 버퍼엔 남았던 다음 단어인 do 만 출력됨

    /*4.  custom function*/
    custom_put("just  ");
    custom_put("do it!");

    printf("%d\n", custom_put2("12345"));

    return 0;
}
