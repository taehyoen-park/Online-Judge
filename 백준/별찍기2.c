#include<stdio.h>

int main()
{
	int i,n;
	int j;;
	
	scanf("%d",&n);
	
	for(i = n; i > 0; i--)
	{	
		for(j = 1; j <= n; j++)
		{
			if(j >= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
