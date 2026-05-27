#include<stdio.h>

void result()
{
    int marks;

    printf("Enter Student Marks: ");
    scanf("%d", &marks);

    if(marks >= 75)
    {
        printf("DISTINCTION");
    }
    else if(marks >= 65)
    {
        printf("FIRST CLASS");
    }
    else if(marks >= 55)
    {
        printf("SECOND CLASS");
    }
    else if(marks >= 40)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
}

int main()
{
    result();

    return 0;
}