#include<stdio.h>
#include<math.h>

void Armstrong()
{
    int no;
    int count = 0;
    int sum = 0;
    int digit;

    printf("Enter a no: ");
    scanf("%d", &no);

    int temp = no;

    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = no;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + (int)pow(digit, count);
        temp = temp / 10;
    }

    if(sum == no)
        printf("No is Armstrong");
    else
        printf("No is Not Armstrong");
}

void main()
{
    Armstrong();
}