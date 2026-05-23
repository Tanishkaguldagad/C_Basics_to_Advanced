#include<stdio.h>
int LeapYear()
{	
    int a;
    
    printf("Enter LeapYear:");
    scanf("%d",&a);
    
	if(a%4==0)
	{
      printf("Year is leap");
	}
	else
	{
	 printf("Year is not leap");
	}
}
void main()
{
	LeapYear();
	
	return 0;
}