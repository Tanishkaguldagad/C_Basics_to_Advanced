#include<stdio.h>
int main()
{
	float Basic,da,ta,hra,total;
	
	printf("Enter Basic Salary:");
	scanf("%f",&Basic);
	
	if(Basic<=5000)
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

    printf("Basic Salary = %.2f\n", Basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total);

}