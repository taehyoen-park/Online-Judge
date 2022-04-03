#include<stdio.h>

int main()
{
	int v,a,b,i;
	int num = 0;
	scanf("%d %d %d",&a,&b,&v);
	
	if((v - a) % (a - b) != 0)
	{
		num = ((v - a) / (a - b)) + 2;
	}
	
	else
	{
		num = (v - a) / (a - b) + 1;
	}
	
	printf("%d",num);
	
	return 0;
}
