#include <stdio.h>

int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    printf("----FACTORIAL----\n");
    printf("       CREATED BY PRINCE\n");

    int i;

    printf(" ENTER ANY NUMBER: ");
    scanf("%d", &i);

    if(i < 0)
    {
        printf("DO NOT ENTER NEGATIVE OR IMMAGINARY NUMBER ON FACTORIAL ");
    }
    else
    {
        printf("Factorial = %d", fact(i));
    }

    return 0;
}