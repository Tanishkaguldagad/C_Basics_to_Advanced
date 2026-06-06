#include<stdio.h>
#include<math.h>

void Armstrong()
{
    int no, remainder, original, digit = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    
    original = no;
    
    while(no != 0)
    {
        no = no / 10;
        digit++;
    }

    no = original;

    while(no != 0)
    {
        remainder = no % 10;
        sum = sum + pow(remainder, digit);
        no = no / 10;
    }

    if(sum == original)
        printf("No is Armstrong");
    else
        printf("No is not Armstrong");
}

int main()
{

    Armstrong();

    return 0;
}