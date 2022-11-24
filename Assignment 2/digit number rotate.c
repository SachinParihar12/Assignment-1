#include<stdio.h>
int main()
{
	int x;
	printf("Enter a 3 digit number\n");
	scanf("%d",&x);
	
	x = (x%10)*100 + (x/10);
	
	printf("number after right rotate is %d ",x);
	
	return 0;
}
