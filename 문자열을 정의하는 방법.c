#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MESSAGE "A symbolic string contact"
#define MAXLENGTH 81
int main()
{
	char words[MAXLENGTH] = "A string in an array";
	const char* pt1 = "A pointer to a string.";

	puts("Puts() adds a newline at the end : "); // puts  : 문자열 출력 함수, 줄바꿈을 알아서 붙여줌
	puts(MESSAGE);
	puts(words);
	puts(pt1);
	words[3] = 'p';
	puts(words);
	// pt1[8] = 'A' // 수정 불가

	char greeting[50] = "Hello, and" "How are" "you" "today!";
	puts(greeting);

	printf("\" To be, or  not to be\" Hamlet said.\n");

	printf("%s, %p, %c\n", "we", "are", *"excellent programmers"); // 문자열 , 첫 번째 글자, 첫 번째 글자 출력됨

	const char m1[15] = "LOVE YOU!";

	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]); // 아스키코드 출력
	printf("\n");

	int n = 8;
	char  cookies[1] = { 'A', };
	char cakes[2 +5] = { 'A', };
	char pies[2 * sizeof(long double) + 1] = { 'A', };
	// char crumbs[n]; // VLA

	char truth[10] = "Truth is";
	if (truth == &truth[0]) puts("true!");
	if (*truth == 'T') puts("true!");
	if (*(truth +1) ==truth[1]) puts("true!");
	if (truth[1] == 'r') puts("true!");

}