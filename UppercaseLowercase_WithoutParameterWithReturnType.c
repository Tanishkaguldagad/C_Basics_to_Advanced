#include<stdio.h>
int UppercaseLowercase()
{
    char ch;
	
	printf("Enter a character:");
	scanf("%c", &ch);
		
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
   ans=UppercaseLowercase();
   
   if(ans==1)
   {
   	printf("character is uppercase");
   }
   else if(ans==0)
   {
   	printf("character is lowercase");
   }
   else{
   	printf("Invalid input!Not an Alphabet");
   }
	
	return 0;
}
