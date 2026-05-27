#include<stdio.h>
int Triangle()
{
	int s1,s2,s3;
	printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &s1,&s2,&s3);
    
	if(s1==s2&&s2==s3)
		{
			return 1;
		}
	else if(s1==s2||s2==s3||s1==s3)
		{
		   return 0;
		}
		else
		{
			return -1;
		}
	}
int main()
{
	int ans;
	int s1,s2,s3;
    
    ans=Triangle();

    if(ans==1)
    {
    	printf("Triangle is Equilateral");
	}
	else if(ans==0)
	{
		printf("Triangle is Isosceles");
	}
	else{
		printf("Triangle is Scalene");
	}
	return 0;
}
