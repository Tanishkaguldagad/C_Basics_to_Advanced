#include<stdio.h>

void SumFirstLast()
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    printf("Sum = %d", first + last);
}

int main()
{
    SumFirstLast();

    return 0;
}