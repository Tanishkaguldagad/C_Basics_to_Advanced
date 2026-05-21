#include<stdio.h>

int AgeCategory(int age)
{
    if(age < 12)
    {
        return 1;
    }
    else if(age >= 12 && age <= 19)
    {
        return 2;
    }
    else if(age >= 20 && age <= 59)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

int main()
{
    int age, ans;

    printf("Enter age: ");
    scanf("%d", &age);

    ans = AgeCategory(age);

    if(ans == 1)
    {
        printf("Person is Child");
    }
    else if(ans == 2)
    {
        printf("Person is Teenager");
    }
    else if(ans == 3)
    {
        printf("Person is Adult");
    }
    else
    {
        printf("Person is Senior");
    }

    return 0;
}