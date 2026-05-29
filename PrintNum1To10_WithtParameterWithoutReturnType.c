#include<stdio.h>

void PrintNum(int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    PrintNum(10);

    return 0;
}