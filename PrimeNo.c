#include<stdio.h>
#include<math.h>

void main()
{
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Not Prime");
    }
    else
    {
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("Prime Number");
        else
            printf("Not Prime");
    }
}
