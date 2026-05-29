#include<stdio.h>

void SumFirstLast(int n)
{
    int first, last;

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
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    SumFirstLast(n);

    return 0;
}