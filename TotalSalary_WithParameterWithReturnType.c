#include<stdio.h>

float TotalSalary(float Basic)
{
    float da, ta, hra, total;

    if(Basic <= 5000)
    {
        da = Basic * 0.10;
        ta = Basic * 0.20;
        hra = Basic * 0.25;
    }
    else
    {
        da = Basic * 0.15;
        ta = Basic * 0.25;
        hra = Basic * 0.30;
    }

    total = Basic + da + ta + hra;

    return total;
}

int main()
{
    float salary, ans;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    ans = TotalSalary(salary);

    printf("Total Salary = %.2f", ans);

    return 0;
}