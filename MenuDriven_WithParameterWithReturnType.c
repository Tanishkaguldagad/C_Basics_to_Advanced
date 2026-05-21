#include<stdio.h>

int Menu(int num, int choice)
{
    int i;
    int flag = 0, remainder, reverse = 0, sum = 0, temp;

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                return 1;
            else
                return 0;

        case 2:
            if(num <= 1)
                return 0;

            for(i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                return 1;
            else
                return 0;

        case 3:
            temp = num;

            while(temp != 0)
            {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp = temp / 10;
            }

            if(reverse == num)
                return 1;
            else
                return 0;

        case 4:
            if(num > 0)
                return 1;
            else if(num < 0)
                return -1;
            else
                return 0;

        case 5:
            temp = num;

            while(temp != 0)
            {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp = temp / 10;
            }

            return reverse;

        case 6:
            temp = num;

            while(temp != 0)
            {
                remainder = temp % 10;
                sum = sum + remainder;
                temp = temp / 10;
            }

            return sum;

        default:
            return -999;
    }
}

int main()
{
    int num, choice, ans;

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

    ans = Menu(num, choice);

    switch(choice)
    {
        case 1:
            if(ans == 1)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:
            if(ans == 1)
                printf("Number is Prime");
            else
                printf("Number is Not Prime");
            break;

        case 3:
            if(ans == 1)
                printf("Number is Palindrome");
            else
                printf("Number is Not Palindrome");
            break;

        case 4:
            if(ans == 1)
                printf("Number is Positive");
            else if(ans == -1)
                printf("Number is Negative");
            else
                printf("Number is Zero");
            break;

        case 5:
            printf("Reverse Number = %d", ans);
            break;

        case 6:
            printf("Sum of Digits = %d", ans);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}