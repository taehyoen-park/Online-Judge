#include<stdio.h>

int main()
{
	int i,j,t,count = 0;
	int m,k,n,y[14],c[14];
	
	scanf("%d",&t);
	
	for(i = 0; i < 15; i++)
	{
		y[i] = i;
	}
	
	c[0] = 0;
	while(count < t)
	{
		scanf("%d",&k);
		scanf("%d",&n);
		for(i = 1; i <= k; i++)
		{
			if(i == 1)
			{
				for(j = 1; j <= n; j++)
				{
					c[j] = ((y[j]) * (y[j]+1)) / 2;		
				}			
			}
			
			else
			{
				for(j = n; j > 0; j--)
				{
					for(m = 1; m < j; m++)
					{
						c[j] += c[m];
					}
				}
			}
		}
		printf("%d\n",c[n]);	
		count++;
	}	

	return 0;
}
