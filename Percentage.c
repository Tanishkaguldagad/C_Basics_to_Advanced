#include<stdio.h>
void main()
{
	int marks;
	printf("Enter a Marks:");
	scanf("%d",&marks);
	
	if(marks>=75)
	{
		printf("Distinction");
	}
	else
	if(marks>=65&&marks<75)
	{
		printf("A+");
	}
	else
	if(marks>=55&&marks<65)	
	{
		printf("B+");
	}
	else
	if(marks>=40&&marks<55)
	{
	printf("Pass");
	}
	else
	{
	printf("Fail");
	}
}
