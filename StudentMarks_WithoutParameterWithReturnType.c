#include<stdio.h>

char* result()
{
    int marks;

    printf("Enter Student Marks: ");
    scanf("%d", &marks);

    if(marks >= 75)
    {
        return "DISTINCTION";
    }
    else if(marks >= 65)
    {
        return "FIRST CLASS";
    }
    else if(marks >= 55)
    {
        return "SECOND CLASS";
    }
    else if(marks >= 40)
    {
        return "PASS";
    }
    else
    {
        return "FAIL";
    }
}

int main()
{
    printf("%s", result());

    return 0;
}