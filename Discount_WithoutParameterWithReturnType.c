#include<stdio.h>

float Discount()
{
	float price;
    float discount, finalAmount;
    char student;
    
    printf("Enter total price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    }
    else
    {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }

    finalAmount = price - discount;

    return finalAmount;
}

int main()
{
    float ans;

    ans = Discount();

    printf("Final Amount to Pay: %.2f", ans);

    return 0;
}