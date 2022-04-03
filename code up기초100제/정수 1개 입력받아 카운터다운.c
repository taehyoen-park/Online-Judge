#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    while(x>0)
    {
    if(x==0)
    printf("\n");
    
    else
    printf("%d\n",--x);
    
    }
     return 0;
}

