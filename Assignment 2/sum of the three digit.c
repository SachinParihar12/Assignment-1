#include<stdio.h>
int main ()
{
	int x = 234 , sum = 0;
	
	sum = x%10;
	x = x/10;
	sum = (x%10) + sum;
	x = x /10;
	sum = x + sum;
	
	printf("sum = %d ", sum);
	
	return 0;
}
