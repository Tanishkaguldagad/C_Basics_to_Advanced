#include<stdio.h>
int main()
{
	int a=5,b=6,temp;

	printf("before swap a=%d b=%d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After Swapping a=%d b=%d",a,b);
	
	
}