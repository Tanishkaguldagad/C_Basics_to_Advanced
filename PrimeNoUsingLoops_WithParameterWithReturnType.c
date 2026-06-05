#include<stdio.h>

int PrimeSeries(int n)
{
    for(int i=2;i<=n;i++)
    {
        int isPrime=1;

        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }

        if(isPrime==1)
            printf("%d ",i);
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    PrimeSeries(n);

    return 0;
}