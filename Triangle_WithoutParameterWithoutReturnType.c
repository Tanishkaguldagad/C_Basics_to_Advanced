#include<stdio.h>
void Triangle()
{
	int s1,s2,s3;
	
	printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &s1,&s2,&s3);
    
	if(s1==s2&&s2==s3)
		{
			printf("Triangle is Equilateral");
		}
	else if(s1==s2||s2==s3||s1==s3)
		{
		   printf("Triangle is Isosceles");
		}
		else
		{
			printf("Triangle is Scalene");
		}
	}
void main()
{
	int s1,s2,s3;
    
    Triangle();

	return 0;
}
