 #include<stdio.h>
void VowelConsonent()
{
	char ch;
    printf("Enter a character:");
	scanf("%c", &ch);	
		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	   printf("Character is vowel");
	}
	else if((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z'))
	{
	   printf("Character is consonent");
	}
	else
	{
	   printf("Invalid Input,Not an Alphabet");
	}
}	
	int main()
	{
	 char ch;
	 
	 VowelConsonent();
	 return 0;
}