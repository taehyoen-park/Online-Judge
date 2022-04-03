#include<stdio.h>

int main()
{
    int i=0;
    int x;
a:
    scanf("%d",&x);
    if(x==0)
    printf("\n");
    
    else
    {
    printf("%d\n",x);
    goto a;
    }
     return 0;
}

