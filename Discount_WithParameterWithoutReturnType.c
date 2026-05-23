#include<stdio.h>

void Discount(float price, char student)
{
    float discount, finalAmount;

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
    
     printf("Final Amount to Pay: %.2f", finalAmount);
}

int main()
{
    float price;
    char student;

    printf("Enter total price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    Discount(price, student);

    return 0;
}