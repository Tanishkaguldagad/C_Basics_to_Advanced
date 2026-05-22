#include<stdio.h>
int vote(int a)
{
	if(a>=18)
	{
			printf("Person is eligible");
	}
	else
	{
		printf("Person is not eligible");
	}
}
int main()
{
	vote(25);
	
	return 0;
}