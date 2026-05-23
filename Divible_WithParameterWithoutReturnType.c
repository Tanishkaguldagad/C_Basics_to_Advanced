#include<stdio.h>

void Divisible(int num)
{
	if(num % 3 == 0 && num % 5 != 0)
	{
		printf("Divisible by 3");
	}
	else if(num % 3 == 0 && num % 5 == 0)
	{
        printf("Divisible by both 3 and 5");
	}
	else if(num % 3 != 0 && num % 5 == 0)
	{
	    printf("Divisble by 5");
	}
	else
	{
		printf("Divisble by None");
	}
}

int main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	Divisible(num);

	return 0;
}