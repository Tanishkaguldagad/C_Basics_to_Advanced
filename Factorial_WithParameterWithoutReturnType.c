#include<stdio.h>

void Factorial(int n)
{
    long long factorial = 1;

    while(n > 0)
    {
        factorial = factorial * n;
        n--;
    }

    printf("Factorial is %lld", factorial);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    Factorial(n);

    return 0;
}