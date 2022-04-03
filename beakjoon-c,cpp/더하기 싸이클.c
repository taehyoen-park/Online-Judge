#include<stdio.h>

int main()
{
	int x,y,z;
	int i=0;
	scanf("%d",&x);
	z=x;
	while(1)
	{
	if(x>=0)
	{
	y=x/10+x%10;
	x=y%10+x%10*10;
	i++;
	if(x==z){
	printf("%d",i);
	break; 
	}
	}
}
return 0;
}
