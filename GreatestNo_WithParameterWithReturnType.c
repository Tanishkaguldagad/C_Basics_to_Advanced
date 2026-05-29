#include<stdio.h>
int GreatestNo(int a,int b,int c)
{
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
	int a,b,c;
	
	printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    ans = GreatestNo(a,b,c);
    
    printf("%d is the greatest number", ans);

    return 0;
}
