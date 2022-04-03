#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x<=100&&x>=90){printf("A");}
    else if(x>=70&&x<90){printf("B");}
     else if(x>=40&&x<70){printf("C");}
      if(x>=0&&x<40){printf("D");}
     return 0;
}

