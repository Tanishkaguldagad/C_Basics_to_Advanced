#include<stdio.h>

char* result(int marks)
{
    if(marks >= 75)
    {
        return "DISTINCTION";
    }
    else if(marks >= 65 && marks < 75)
    {
        return "FIRST CLASS";
    }
    else if(marks >= 55 && marks < 65)
    {
        return "SECOND CLASS";
    }
    else if(marks >= 40 && marks < 55)
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
    int marks;

    printf("Enter Students Marks: ");
    scanf("%d",&marks);

    printf("%s", result(marks));

    return 0;
}