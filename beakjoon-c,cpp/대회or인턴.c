#include<stdio.h>

int main()
{
	int n,m,k,i;
	
	scanf("%d %d %d",&n,&m,&k);
	
	if(m <= 0 || n <= 0)
	{
		printf("%d",0);
		return 0; 
	}
	
	if(k != 0)
	{
		while(1) 
		{	
			if(2 * m > n)
			{
				m--;
				k--;
				if(2 * m == n || k == 0)
				{
					break;
				}
			}
			else if(2 * m < n)
			{
				n--;
				k--;
				if(2 * m == n || k ==0)
				{
					break;
				}
			}
			else 
				break;
		}
		
		while(k > 0 || k < 0)
		{		
			k -= 3;	
			n -= 2;
			m -= 1;
			if(k <= 0)
			{
				printf("%d",m);
				return 0;
			}			
		}
	}
	
		if(k == 0)
		{
			if(2 * m > n)
			{
				printf("%d",n/2);
				return 0;	
			}
			
			else
			{
				printf("%d",m);
				return 0;	
			}				
		}
		
	return 0;
}
