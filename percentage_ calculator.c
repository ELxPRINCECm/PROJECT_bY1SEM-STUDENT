

#include<stdio.h>
int main(){
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    printf("---PERCENTAGE CALCULATOR---\n");
    
    printf("                    -CREATED BY PRINCE-\n");
    
    printf("ENTER MARK OF 5 SUBJECTS (OUT OF 100) \n"); 
    {

          printf("SUBJECT 1: ");
          scanf("%d", &m1);
    
          printf("SUBJECT 2: ");
          scanf("%d", &m2);
    
          printf("SUBJECT 3: ");
          scanf("%d", &m3);

          printf("SUBJECT 4: ");
          scanf("%d", &m4);

         printf("SUBJECT 5: ");
         scanf("%d", &m5);
    }
    
    if(m1 < 0 || m1 > 100
    || m2  < 0 || m2 > 100
    || m3 < 0 || m3 > 100 
    || m4 < 0 || m4 > 100
    || m5 < 0 || m5 >100 )
    {
        printf("ENTER VALID NO LESS THAN 100 :(\n");
        return 0;
    }
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    
             printf("\nTOTAL MARKS OBTAINED : %d / 500", total);
             printf("\nPERCENTAGE : %.2f", percentage);
    return 0;
}