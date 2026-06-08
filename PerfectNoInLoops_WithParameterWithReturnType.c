#include <stdio.h>

int PerfectNo(int n)
{
	int sum=0;
    for(int i = 1; i <= n/2; i++)  
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
void main()
{
	int n,ans;
	
	printf("Enter n: ");
    scanf("%d", &n);
    
    ans=PerfectNo(n);
    
    if(ans==1)
    {
    	printf("No is Perfect");
	}
	else{
		printf("No is Not Perfect");
	}
	return 0;
}