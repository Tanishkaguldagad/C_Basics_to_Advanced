#include<stdio.h>

long long Factorial()
{
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        factorial = factorial * n;
        n--;
    }

    return factorial;
}

int main()
{
    long long ans;

    ans = Factorial();

    printf("Factorial is %lld", ans);

    return 0;
}