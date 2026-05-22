#include<stdio.h>
int LeapYear(int a)
{	
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
	LeapYear(2004);
	return 0;
}