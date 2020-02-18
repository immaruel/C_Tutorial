#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main()
{
	int i;
	int32_t i32;         //32 bit integer
	int_least8_t i8;      //smallest 8 bit
	int_fast8_t imax;    //fastest minimum
	uintmax_t uimax;     //biggest signed integers
	
	i32 = 1004;        //biggest unsigned inter
	
	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32); //매크로 대체 
	
	return 0;
	
}
