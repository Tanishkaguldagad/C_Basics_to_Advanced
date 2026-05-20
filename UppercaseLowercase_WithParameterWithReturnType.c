#include<stdio.h>
int UppercaseLowercase(char ch)
{	
	if(ch>='A' && ch<='Z')
	{
		return 1;
	}
	else if(ch>='a' && ch<='z')
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
	char ch;
	
	printf("Enter a character:");
	scanf("%c", &ch);
	
	ans = UppercaseLowercase(ch);
	
	if(ans==1)
	{
		printf("%c is uppercase",ch);
	}
	else if(ans==0)
	{
		printf("%c is lowercase",ch);
	}
	else{
		printf("Invalid input!Not an alphabet");
	}
	return 0;
}
