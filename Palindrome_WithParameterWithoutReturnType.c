#include<stdio.h>
void Palindrome(int num)
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
		printf("NUM IS PALLIDROME");
	}
	else{
		printf("NUM IS NOT PALLIDROME");
	}
}
int main()
{
	Palindrome(121);
	return 0;
}