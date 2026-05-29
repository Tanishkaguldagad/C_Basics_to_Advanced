#include<stdio.h>
int GreatestNo()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a > b)
    {
        if(a > c)
        {
           return a;
        }
        else
        {
           return c;
        }
    }
    else
    {
        if(b > c)
        {
           return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
	int ans;
	
    ans = GreatestNo();
    
    printf("%d is the greatest number", ans);

    return 0;
}
