#include <stdio.h>

int main() {
    int number, i;
    
    printf("--CHECK NUMBER IS EVEN OR ODD--\n");
    printf("                     -CREATED BY PRINCE- \n");
    
    printf("ENTER AN INTEGER : ");
    scanf("%d", &number);

    if (number % 2 == 0) 
    {
        printf("%d IS EVEN NUMBER \n", number);
    } 
    else
    {
        printf("%d IS ODD NUMBER\n", number);
    }

    return 0;
}
