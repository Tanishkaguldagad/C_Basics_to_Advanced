#include <stdio.h>

void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)   // Outer loop
    {
        int sum = 0;

        for(int j = 1; j <= i/2; j++)   // Inner loop
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}