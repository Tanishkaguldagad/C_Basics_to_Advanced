#include<stdio.h>
void GreatestNo(int a,int b,int c)
{
    if(a > b)
    {
        if(a > c)
        {
            printf("Greatest Number = %d", a);
        }
        else
        {
           printf("Greatest Number = %d", c);
        }
    }
    else
    {
        if(b > c)
        {
           printf("Greatest Number = %d", b);
        }
        else
        {
            printf("Greatest Number = %d", c);
        }
    }
}
int main()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    GreatestNo(a,b,c);

    return 0;
}
