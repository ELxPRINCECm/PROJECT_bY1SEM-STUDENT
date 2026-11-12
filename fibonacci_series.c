#include<stdio.h>
int main()
{
    printf("---FINONACCI SERIES---\n");
    printf("                 -CREATED BY PRINCE-\n");

      int a = 0, b = 1, i, n, c;
      printf("ENTER NUMBER OF TERMS : ");
      scanf("%d", &n);
      for (i=1; i<=n; i++)
      {
        printf("%d", a);

        c = a + b;
        a = b;
        b = c;
      }
      return 0;  
}