

#include <stdio.h>

int main()
{
    int a, b;
    char x;

    printf("--- CALCULATOR ---\n");
    printf("           --CREATED BY PRINCE\n");

    printf("ENTER YOU FIRST NUMBER: ");
    scanf("%d", &a);

    printf("ENTER YOUR OPERATOR (+, -, *, /): ");
    scanf(" %c", &x);

    printf("ENTER YOUR SECOUND NUMBER: ");
    scanf("%d", &b);
printf("ANSWER");
    switch(x)
    {
        case '+':
            printf("  = %d", a + b);
            break;

        case '-':
            printf(" = %d", a - b);
            break;
            
        case '*':
            printf(" = %d", a * b);
            break;

        case '/':
            if(b != 0)
                printf(" = %d", a / b);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}