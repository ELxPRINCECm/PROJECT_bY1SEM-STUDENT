#include<stdio.h>
int main()
{
    int a, b;

      printf("----SIMPLE CALCULATOR----\n");

      printf("ENTER FIRST NUMBER = ");
      scanf("%d", &a);
      printf("ENTER SECOND NUMBER = ");
      scanf("%d", &b);

      printf("addition = %d\n", a+b);
      
      printf("subtraction = %d\n", a-b);
      
      printf("multiplaction = %d\n",a*b);
      
      printf("division = %2f\n",(float)a/b);
      return 0;
}  
