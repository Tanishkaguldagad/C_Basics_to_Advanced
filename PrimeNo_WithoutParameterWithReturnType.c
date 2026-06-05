#include<stdio.h>
#include<math.h>

int PrimeNo()
{
    int i;
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

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
    int ans;
    ans = PrimeNo();
    
    if(ans==1)
    {
    	printf("Number is Prime");
	}
	else{
		printf("Number is not Prime");
	}

    return 0;
}