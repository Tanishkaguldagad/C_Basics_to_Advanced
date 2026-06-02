#include<stdio.h>
#include<math.h>

int PrimeNo(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, ans;

    printf("Enter number: ");
    scanf("%d", &n);

    ans = PrimeNo(n);

    if(ans == 1)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is Not Prime");
    }

    return 0;
}