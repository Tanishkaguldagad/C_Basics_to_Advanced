#include<stdio.h>
#include<math.h>

int Armstrong()
{
    int no;
    int temp;
    int count = 0;
    int sum = 0;
    int digit;

    printf("Enter a no: ");
    scanf("%d", &no);

    temp = no;

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
        return 1;
    else
        return 0;
}

void main()
{
    int ans;

    ans = Armstrong();

    if(ans == 1)
        printf("No is Armstrong");
    else
        printf("No is Not Armstrong");
}