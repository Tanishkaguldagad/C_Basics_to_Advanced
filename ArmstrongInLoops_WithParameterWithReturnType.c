#include<stdio.h>
#include<math.h>

int Armstrong(int no)
{
    int temp = no;
    int count = 0;
    int sum = 0;
    int digit;

    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = no;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if(sum == no)
        return 1;
    else
        return 0;
}

void main()
{
    int no, ans;

    printf("Enter a no: ");
    scanf("%d", &no);

    ans = Armstrong(no);

    if(ans == 1)
        printf("No is Armstrong");
    else
        printf("No is Not Armstrong");
}