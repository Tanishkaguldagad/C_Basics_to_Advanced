#include<stdio.h>
int vote(int a)
{
	if(a>=18)
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
	ans=vote(25);
	
	if(ans==1)
	{
		printf("Person is eligible");
	}
	else{
		printf("Person is not eligible");
	}
	return 0;
}