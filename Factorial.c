#include<stdio.h>
void main()
{
	int n;
	long long factorial=1;
	
	printf("Enter a number:");
    scanf("%d",&n);
    
    while(n>0)
    {
    	factorial=factorial*n;
    	n--;
	}
	printf("Factorial is %lld", factorial);
}