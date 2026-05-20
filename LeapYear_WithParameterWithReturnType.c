#include<stdio.h>
int LeapYear(int a)
{	
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
	 
	 ans=LeapYear(2004);
	 
	 if(ans==1)
	 {
	 	printf("Year is Leap");
	 }
	 else {
	 	printf("Year is not Leap");
	 }
	 return 0;
}
