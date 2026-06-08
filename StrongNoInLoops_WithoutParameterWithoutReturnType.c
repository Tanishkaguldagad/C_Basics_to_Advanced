#include<stdio.h>

void StrongNo()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int num = 1; num <= n; num++)
    {
        int original = num;
        int sum = 0, digit, fact;

        while(original > 0)
        {
            digit = original % 10;
            fact = 1;

            for(int i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
            original = original / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}

void main()
{
    StrongNo();
}