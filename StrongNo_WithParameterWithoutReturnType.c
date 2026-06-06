#include<stdio.h>

void Strong(int n)
{
    int temp, digit;
    int sum = 0;
    int factorial;

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        factorial = 1;

        for(int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if(sum == temp)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    Strong(n);

    return 0;
}