#include<stdio.h>
int Armstrong(int no)
{
	int remainder,original,digit=0;
	int sum=0;

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
	return 1;
}
else
{
   return 0;
}
}
int main()
{
	int no,ans;
	
	printf("Enter a number:");
	scanf("%d",&no);
	
	ans=Armstrong(no);
	
	if(ans==1)
	{
		printf("No is Armstrong");
	}
	else{
		printf("No is not Armstrong");
	}
	return 0;
}