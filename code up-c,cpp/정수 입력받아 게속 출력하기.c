#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d",&y);
repeat:
    scanf("%d",&x);
    if(y>0)
    {
    printf("%d\n",x);
    --y;
    goto repeat;
    }
     return 0;
}
