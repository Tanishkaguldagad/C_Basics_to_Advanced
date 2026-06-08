#include<stdio.h>

void NumberOperations(int num, int choice)
{
    int i, flag = 0;
    int remainder, reverse = 0, sum = 0, temp;

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:
            if(num <= 1)
            {
                printf("Not Prime");
            }
            else
            {
                for(i = 2; i <= num/2; i++)
                {
                    if(num % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0)
                    printf("Number is Prime");
                else
                    printf("Number is Not Prime");
            }
            break;

        case 3:
            temp = num;

            while(temp != 0)
            {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp = temp / 10;
            }

            if(reverse == num)
                printf("Number is Palindrome");
            else
                printf("Number is Not Palindrome");
            break;

        case 4:
            if(num > 0)
                printf("Number is Positive");
            else if(num < 0)
                printf("Number is Negative");
            else
                printf("Number is Zero");
            break;

        case 5:
            temp = num;

            while(temp != 0)
            {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp = temp / 10;
            }

            printf("Reverse of number is: %d", reverse);
            break;

        case 6:
            temp = num;

            while(temp != 0)
            {
                remainder = temp % 10;
                sum = sum + remainder;
                temp = temp / 10;
            }

            printf("Sum of digits is: %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}

void main()
{
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n---- MENU ----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    NumberOperations(num, choice);
}