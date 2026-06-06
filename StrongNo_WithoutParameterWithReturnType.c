#include<stdio.h>

int Strong()
{
    int n, temp, digit;
    int sum = 0;
    int factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

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
    int ans;

    ans = Strong();

    if(ans == 1)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}