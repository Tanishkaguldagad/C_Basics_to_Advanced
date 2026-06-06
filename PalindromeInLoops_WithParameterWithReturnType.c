#include<stdio.h>

int Palindrome(int n)
{
    int temp, remainder, reverse = 0;

    temp = n;

    while(n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(reverse == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n, ans;

    printf("Enter a number: ");
    scanf("%d", &n);

    ans = Palindrome(n);

    if(ans == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}