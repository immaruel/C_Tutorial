 #include<stdio.h>
 #include<stdbool.h>
  
 
 int main()
{
	_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2); 	
	
	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);
	
	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");
	
	return 0;
} 
