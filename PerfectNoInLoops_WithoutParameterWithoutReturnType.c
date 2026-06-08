#include <stdio.h>

void PerfectNo()
{
	int n;
	int sum=0;
	printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n/2; i++)  
    {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == n)
            printf("No is Perfect");
        else 
        	printf("No is Not Perfect");
    }
void main()
{
    PerfectNo();
}