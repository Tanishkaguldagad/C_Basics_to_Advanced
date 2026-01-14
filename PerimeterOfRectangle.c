#include<stdio.h>
int main()
{
	int length,width,perimeter;
	printf("Enter a length of Rectangle:");
	scanf("%d",&length);
	
	printf("Enter a width of rectangle:");
	scanf("%d",&width);
	
	perimeter=2*(length+width);
	
	printf("Perimeter=%d",perimeter);
	
	
}