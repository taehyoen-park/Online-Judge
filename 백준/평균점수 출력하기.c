#include<stdio.h>

int main()
{
    int a,s,d,f,g;
    scanf("%d\n%d\n%d\n%d\n%d",&a,&s,&d,&f,&g);
    if(a<=40&&a%5==0)
        a=40;
    
     if(s<=40&&s%5==0)
         s=40;
    
     if(d<=40&&d%5==0)
             d=40;
    
     if(f<=40&&f%5==0)
             f=40;
             
    if(g<=40&&g%5==0)
             g=40;
    
    printf("%d",(a+s+d+f+g)/5);
    
    return 0;
}
