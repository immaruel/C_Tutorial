#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void fit_str(char*str, unsigned int size)
{
    if (strlen(str) > size)
        str[size] = '\0';
}
int main()
{
    /*
        streln( ) : 문자열의 길이를 알려주는 함수
    */
    char msg[] = "Just,""do it!";
    puts(msg);
    printf("Length %d\n", strlen(msg));
    fit_str(msg, 4);
    puts(msg);
    printf("Length %d\n", strlen(msg));

    /*
       strcat( ) 과 strncat( ) : strin concatenation
    */
    char str1[100] = "First string";
    char str2[] = "Second string";

    strcat(str1, ",");
    strcat(str1, str2);

    strncat(str1, str2, 2); // 뒤 두글자만 추가해줌
    puts(str1);

    /*
       strcmp( ) 과 strncmp( ) : 문자열 끼리 비교 , 같은 면 0, 왼쪽 값이 크면 1, 왼쪽 값이 작으면 -1
    */
    printf("%d\n", strcmp("A", "A"));
    printf("%d\n", strcmp("A", "B"));
    printf("%d\n", strcmp("B", "A"));
    printf("%d\n", strcmp("Hello", "Hello"));
    printf("%d\n", strcmp("Banana", "Bananas"));
    printf("%d\n", strcmp("Bananas", "Banana"));
    printf("%d\n", strcmp("Bananas", "Bananas",6));


    /*
      strcpy( ) 과 strncpy( ) : 문자열 복사
   */
    char dest[100] = "";
    char source[] = "Start programming!";
    // dest= source // 오류 발생!
    // dest = "Start someting", // 오류 발생
    strcpy(dest, source);
    strcpy(dest, source, 5);
    *strcpy(dest, source + 6);
    strcpy(dest, source);
    strcpy(dest + 6, "coding!");
    puts(dest);

    /*
      sprintf( ) : 문자열 만들기 , ex) 연속된 파일 이름 순서대로 만들기
     */
    char str[100] = "";
    int i = 123;
    double d = 3.14;
    sprintf(str, "%05d.png %f", i, d);
    puts(str);

}
