#include<stdio.h>

int main()
{
	int n,i,x;
	scanf("%d",&n);
    for(i=1;n>0;i++)
	{
	if(n%5%3!=0&&n!=4&&n!=7)
	{
	x=(n/5-i)+(n%5+5*i)/3;
	if((n%5+5*i)%3==0)
	printf("%d",x);
	
	else 
	continue;
	}
	else if(n%5%3==0)
	{
	printf("%d",(n/5+n%5/3));
	break;
	}
	else if(n==4||n==7)
	printf("%d",-1);
	break;
		
}
	return 0; 
}
