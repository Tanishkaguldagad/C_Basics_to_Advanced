#include<stdio.h>

void Palindrome()
{
    int n, temp, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(reverse == temp)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main()
{
    Palindrome();
    return 0;
}