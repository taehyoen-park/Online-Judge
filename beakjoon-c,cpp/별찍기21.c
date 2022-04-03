#include<stdio.h>

int main()
{
	int n,j,k,t,i;
	
	scanf("%d",&n);
	
	if(n == 1)
	{
		printf("*");
		return 0;
	}
	for(j = 1; j < 2 * n + 1; j++)
	{
		if(j % 2 != 0)	
		{
			for(t = 1; t <= n ;t+=2)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for(k = 0; k < n / 2;k++)
			{
				printf(" *");
			}
			printf("\n");
		}	
	}
	return 0;
}
