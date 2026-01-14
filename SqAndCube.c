#include<stdio.h>
int main()
{
	int num;
	int sq,cube;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	sq=num*num;
	cube=num*num*num;
	
	printf("sq=%d\ncube=%d\n",sq,cube);
	return 0;
}