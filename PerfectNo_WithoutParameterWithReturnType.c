#include<stdio.h>

int Perfect()
{
	int n;
    int i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int ans;
    ans = Perfect();

    if(ans == 1)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}