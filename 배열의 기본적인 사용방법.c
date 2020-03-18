#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MONTHS 12
int main()
{
	int high[MONTHS] = { 2, 5, 11, 18, 23,27,29,30, 26,20,12, 4 };

	for (int i = 0; i < MONTHS; i++)
		printf("%d", high[i]);
	printf("\n");

	float ave = 0.0;
	for (int i = 0; i < MONTHS; i++)
		ave += high[i];
	printf("average = %f\n", ave / (float)MONTHS);

	high[0] = 1; // 재입력
	high[1] = 2;

	printf("%p %p\n", high, &high[0]);
	for (int i = 0; i < MONTHS; ++i)
		printf("%lld\n", (long long)&high[i]); // 16진수 주소를 10진수 정수로 바꿔 출력
	printf("\n");

	//high[11] = 4; //run time error
	//high[-1] = 123; //run time rror

	const int temp = 0;
	
	int insuff[4] = { 2 ,4 };
	for (int i = 0; i < 4; ++i)
		printf("%d\n", insuff[i]);
	printf("\n");

	const int power_of_twos[] = { 1,2,4,8,16,32,64 };
	printf("%d\n", sizeof(power_of_twos));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(power_of_twos[0]));

	for (int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i)
		printf("%d  ", power_of_twos[i]);
	printf("\n");
	
	int days[MONTHS] = { 31, 28,[4] = 31, 30, 31,[1] = 29 }; // 31, 29 ,0, 0, 31, 30, 31, 0, 0, 0, 0, 0
		for (int i = 0; i < MONTHS; i++)
			printf("%d", days[i]);
	printf("\n");

	int arr1[MONTHS]; //YES
	double arr2[123];//YES
	float arr3[3 * 4 + 1];//YES
	float arr4[sizeof(int) + 1]; //YES
	//float arr5[-10]; // NO
	//float arr6[0]; //NO
	//float arr7[1.5]; //NO
	float arr8[(int)1.5]; //YES

	
}