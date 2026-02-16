#include<stdio.h>
void main()
{
	int no,i;
	int sum=0;
	printf("Enter a no:");
	scanf("%d",&no);
	
	for(i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
		if(sum==no)
		{
			printf("no is perfect");
		}
		else
		{
			printf("no is not perfect");
		}
	}