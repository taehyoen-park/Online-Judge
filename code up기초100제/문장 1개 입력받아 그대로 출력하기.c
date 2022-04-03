#include<stdio.h>

int main()
{
    char x[2001];
    fgets(x,2000,stdin);
    printf("%s",x);
    return 0;
}

