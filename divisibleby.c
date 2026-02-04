#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num%3==0 && num%5!=0)
	{
		printf("divisible by 3");
	}
	else {
		if(num%3==0 && num%5==0)
		{
			printf("divisible by both");
		}
		else
		{
			if(num%3!=0 && num%5==0)
			{
				printf("divible by 5");
			}
			else{
				if(num%3!=0 && num%5!=0)
				{
					printf("divisible by none");
				}
			}
		}
	}
}