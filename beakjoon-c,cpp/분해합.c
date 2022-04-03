#include<stdio.h>

int main()
{
    int i,n,a,c=0,b,k;
	scanf("%d",&n);
	k=n;
    while(n>0)
	{
	  b=n;
	  	for(i=0,a=n%10;b>0;i++)
	 	{
	  		a+=b/10%10;
	  		b=b/10;
		}
		
		if(k == a+n)
	 	{
	  		c=n;
	  		n--;
	  		continue;
	  	}
	  	
	  	else if(n==0&&c==0)
	  	{
	  		c=n;
	  		break;
	  	}
	  	
	  	else
	  		n--;
	}
	
    printf("%d",c);
    return 0;
}
