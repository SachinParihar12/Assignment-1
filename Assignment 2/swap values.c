#include<stdio.h>
int main()
{
	int x = 60 ,y = 50 ,t;
	
	t = x;
	x = y;
	y = t;
	
	printf("x = %d , y = %d",x,y); 
	return 0;
}

