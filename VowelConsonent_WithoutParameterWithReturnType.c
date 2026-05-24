 #include<stdio.h>
int VowelConsonent()
{
	char ch;
    printf("Enter a character:");
	scanf("%c", &ch);	
		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	   return 1;
	}
	else if((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z'))
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
	 char ch;
	 int ans;
	 
	 ans=VowelConsonent();
	 
	 if(ans==1)
	 {
	 	printf("character is vowel");
	 }
	 else if(ans==0)
	 {
	 	printf("character is consonent",ch);
	 }
	 else
	 {
	 	printf("Invalid Input,Not an Alphabet");
	 }
	 return 0;
}