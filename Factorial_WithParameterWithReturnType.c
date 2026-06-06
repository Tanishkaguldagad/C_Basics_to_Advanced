#include<stdio.h>

long long Factorial(int n)
{
    long long factorial = 1;

    while(n > 0)
    {
        factorial = factorial * n;
        n--;
    }

    return factorial;
}

int main()
{
    int n;
    long long ans;

    printf("Enter a number: ");
    scanf("%d", &n);

    ans = Factorial(n);

    printf("Factorial is %lld", ans);

    return 0;
}