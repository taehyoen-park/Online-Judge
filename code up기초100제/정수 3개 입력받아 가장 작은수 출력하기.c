#include<stdio.h>

int main()
{
       int a,b,c;
       int x;
    scanf("%d %d %d",&a,&b,&c);
    x=(b>a&&c>a)?a:(a>b&&c>b)?b:(a>c&&b>c)?c:a;
    printf("%d",x);
     return 0;
}

