#include<stdio.h>
#include<math.h>

void PrimeNo(int n)
{
    int i, flag = 0;

    if(n <= 1)
    {
        printf("Number is not Prime");
        return;
    }

    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Number is Prime");
    else
        printf("Number is not Prime");
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    PrimeNo(n);

    return 0;
}