#include<stdio.h>

int main()
{
    unsigned long long int a,b,c,i;
    scanf("%llu %llu %llu",&a,&b,&c);
    if(a!=b)
    {
    for(i=1;c-i!=0&&c>=0;++i)
    {
    a*=b;
    }
    printf("%llu",a);
    }
    else
    {
         for(i=1;c-i!=0&&c>0;++i)
         {
    a*=b;
         }
    printf("%llu",a);
    }
     return 0;
}
