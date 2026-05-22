#include<stdio.h>
int UppercaseLowercase(char ch)
{	
	if(ch>='A' && ch<='Z')
	{
		printf("%c is uppercase",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c is lowercase",ch);
	}
	else
	{
	   	printf("Invalid input!Not an alphabet");
	}
	}
	
int main()
{
	char ch;
	
	printf("Enter a character:");
	scanf("%c", &ch);
	
    UppercaseLowercase(ch);
	
	return 0;
}
