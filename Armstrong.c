#include<stdio.h>
void main()
{
	int no,remainder,original,digit=0;
	int sum=0;
	
	printf("Enter a number:");
	scanf("%d",&no);
	
	original=no;
	
	while(no!=0)
	{
		no=no/10;
		digit++;
	}
	no=original;

while(no!=0)
{
	remainder=no%10;
	sum=sum+pow(remainder,digit);
	no=no/10;
}
if(sum==original)
{
	printf("no is armstrong");
}
else
{
	printf("no is not armstrong");
}
}