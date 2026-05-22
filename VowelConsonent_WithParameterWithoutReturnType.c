#include<stdio.h>
int VowelConsonent(char ch)
{		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	   	printf("%c is vowel",ch);
	}
	else if((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z'))
	{
	   	printf("%c is consonent",ch);
	}
	else
	{
	   printf("Invalid Input,Not an Alphabet");
	}
}	
	int main()
	{
	 char ch;
	 int ans;
	 
	 printf("Enter a character:");
	 scanf("%c", &ch);
	 
	 VowelConsonent(ch);
	 
	 return 0;
}