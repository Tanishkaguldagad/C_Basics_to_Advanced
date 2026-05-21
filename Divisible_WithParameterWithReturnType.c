#include<stdio.h>

int Divisible(int num)
{
	if(num % 3 == 0 && num % 5 != 0)
	{
		return 1;
	}
	else if(num % 3 == 0 && num % 5 == 0)
	{
		return 2;
	}
	else if(num % 3 != 0 && num % 5 == 0)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}

int main()
{
	int ans, num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	ans = Divisible(num);

	if(ans == 1)
	{
		printf("Divisible by 3");
	}
	else if(ans == 2)
	{
		printf("Divisible by both 3 and 5");
	}
	else if(ans == 3)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Divisible by none");
	}

	return 0;
}