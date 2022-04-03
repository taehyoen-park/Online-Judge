#include<stdio.h>

int main()
{
     int x;
     scanf("%d",&x);
       if(x>0)
       {
         printf("plus\n");
         if(x%2==0)
         printf("even\n");
         
         else
         printf("odd");
       }
      
       else
       {
       printf("minus\n");
       if(x%2==0)
         printf("even\n");
         
         else
         printf("odd");
       }
     return 0;
}

