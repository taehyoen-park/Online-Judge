#include<stdio.h>

int main()
{
    int a=0,x,i=0;
    scanf("%d",&x);
    while(a<=x){
    	if(a%2==0)
    		i+=a;
    	a++;
    }
   	printf("%d",i); 
     return 0;
}
