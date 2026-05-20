#include<stdio.h>
int Palindrome(int num)
{
	int r1,r2,r3,rev;
	int q1;
	
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;

	rev=r1*100+r2*10+r3;
	
	if(num==rev)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{

	int ans;
	
	 ans=Palindrome(121);
	if(ans==1)
	{
		printf("NUM IS PALLIDROME");
	}
	else{
		printf("NUM IS NOT PALLIDROME");
	}
	return 0;
}