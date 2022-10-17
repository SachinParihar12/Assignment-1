#include<stdio.h>
int main()
{
	float radius, area;
	
	printf("Enter radius\n");
	scanf("%f",&radius);
	
	area = 3.14 * radius * radius;
	printf("Area of circle is %f and radius is %f",area,radius);
	
	return 0;
	
}
