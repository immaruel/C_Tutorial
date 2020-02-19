 #include<stdio.h>
 #include<stdbool.h>
  
 
 int main()
{
	/*for(initialize; test; update) : for ¹® ±¸Á¶ */
	
	for (int x = 1, y =5, y<= 20; y = (++x * 3)+10)
		printf("%d\n",x)
	return 0;
} 
