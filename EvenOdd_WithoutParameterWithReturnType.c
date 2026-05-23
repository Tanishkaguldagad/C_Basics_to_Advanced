#include<stdio.h>
int evenodd(int a)
{	
	if(a%2==0)
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
	   ans=evenodd(5);
	   
	   if(ans==1)
	   {
	   	printf("Number is Even");
	   }
	   else{
	   	printf("Number is odd");
	   }
	   return 0;
}