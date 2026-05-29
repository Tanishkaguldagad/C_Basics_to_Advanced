#include<stdio.h>

void Table(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}

int main()
{
    Table(5);

    return 0;
}