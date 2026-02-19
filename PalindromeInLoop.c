#include<stdio.h>
void main()
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

    return 0;
}

