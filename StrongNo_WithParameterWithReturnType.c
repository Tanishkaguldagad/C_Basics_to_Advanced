#include<stdio.h>

int Strong(int n)
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
        return 1;
    else
        return 0;
}

int main()
{
    int n, ans;

    printf("Enter a number: ");
    scanf("%d", &n);

    ans = Strong(n);

    if(ans == 1)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}