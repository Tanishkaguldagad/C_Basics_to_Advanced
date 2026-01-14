#include<stdio.h>
int main()
{
	int min,hours;
	
	 printf("Enter minutes:");
	 scanf("%d",&min);
	 
	 hours=min/60;
	 min=min%60;
	 printf("Hours=%d\nmin=%d ",hours,min);
}