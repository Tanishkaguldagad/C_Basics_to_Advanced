#include<stdio.h>
int Palindrome()
{
	int num;
	int r1,r2,r3,rev;
	int q1;
	
	printf("Enter a NUmber:");
	scanf("%d",&num);
	r1=num%10;
	q1=num/10;
	
	r2=q1%10;
	r3=q1/10;

	rev=r1*100+r2*10+r3;
	
	if(num==rev)
	{
		printf("Num is palindrome");
	}
	else{
	    printf("Num is not palindrome");
	}
}
int main()
{
	Palindrome();
	
	return 0;
}