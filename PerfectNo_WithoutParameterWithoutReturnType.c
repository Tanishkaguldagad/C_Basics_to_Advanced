#include<stdio.h>

void Perfect()
{
	int n;
    int i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("It is Perfect Number");
    else
        printf("It is not Perfect Number");
}

int main()
{
   Perfect();
   return 0;
}