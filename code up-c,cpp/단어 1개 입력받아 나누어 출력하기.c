#include<stdio.h>

int main()
{
    char x[30];  
    int i;
    scanf("%s",&x);
    for(i=0;x[i]!='\0';i++)
    {
    printf("\'%c\'\n",x[i]);
    }
    
    return 0;
}
