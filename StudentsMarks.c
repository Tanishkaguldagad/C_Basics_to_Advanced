#include<stdio.h>

int main()
{
    int marks;

    printf("Enter Students Marks: ");
    scanf("%d",&marks);

    if(marks >= 75)
    {
        printf("DISTINCTION");
    }
    else if(marks >= 65 && marks < 75)
    {
        printf("FIRST CLASS");
    }
    else if(marks >= 55 && marks < 65)
    {
        printf("SECOND CLASS");
    }
    else if(marks >= 40 && marks < 55)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}