#include<stdio.h>

int main()
{
	int i,j,n,t,k = 1;
	
	scanf("%d",&n);
	
	for(i = 2*n - 1; i > 0 ; i--)
	{
		if(i % 2 == 0)
		{
			for(t = 0; t < k; t++)
			{
				printf(" ");
			}
			k++;
			continue;
		}
		for(j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	k = n;
	for(i = 3; i <= 2*n - 1 ; i += 2)
	{
		
		for(t = 2; t < k; t++)
		{
			printf(" ");
		}
		k--;
		
		for(j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
