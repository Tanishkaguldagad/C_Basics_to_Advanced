#include<stdio.h>

void Perfect(int n)
{
    int i, sum = 0;

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
        printf("It is Not Perfect Number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    Perfect(n);

    return 0;
}