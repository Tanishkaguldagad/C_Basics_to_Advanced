#include<stdio.h>
int LeapYear()
{	
    int a;
    
    printf("Enter LeapYear:");
    scanf("%d",&a);
    
	if(a%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int ans;
	ans=LeapYear();
	
	if(ans==1)
	{
		printf("Year is leap");
	}
	else{
		printf("Year is not leap");
	}
	return 0;
}