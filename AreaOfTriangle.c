#include<stdio.h>
int main()
{
	float Base,height,area;
	printf("Enter a Base of Triangle:");
	scanf("%f",&Base);
	
	printf("Enter a height of Triangle:");
	scanf("%f",&height);
	
	area=(Base*height)/2;
	
	printf("area=%.2f\n",area);
	
	
}