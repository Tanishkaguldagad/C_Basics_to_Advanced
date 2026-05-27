#include <stdio.h>

int operator()
{
	int a,b;
	char op;
	printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    
    switch(op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if(b != 0)
                return a / b;
            else
            {
                printf("Division by zero not allowed");
                return 0;
            }

        case '%':
            if(b != 0)
                return a % b;
            else
            {
                printf("Modulo by zero not allowed");
                return 0;
            }

        default:
            printf("Invalid operator");
            
            return 0;
    }
}

int main()
{
	int ans;
    ans = operator();

    printf("Result = %d", ans);

    return 0;
}