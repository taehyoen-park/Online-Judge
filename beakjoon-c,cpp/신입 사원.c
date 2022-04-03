#include<stdio.h>

int main()
{
	int i,j,n,n2;
	int key = 0,key2 = 0,k = 100001;
	int num[100000][2],count[100000];
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&n2);
		count[i] = n2;
		
		for(j = 0; j < n2; j++)
		{
			scanf("%d %d",&num[j][0],&num[j][1]);
		}
		
		for(j = 0; j < n2; j++)
		{
		
			if(num[j][1] == 1 && num[j][0] != 1)
			{
				key = num[j][0];
				break;	
			}
			
			else if(num[j][0] == 1 && num[j][1] != 1)
			{
				key2 = num[j][1];	
				break;	
			}
			
			else
			{
				if(num[j][1] == 1 && num[j][0] == 1)
				{
					count[i] = 1;
					break;
				}
			
				else
					continue;
			}
		}
		
		if(key > 0)
		{
			for(j = 0; j < n2; j++)
			{
				if(num[j][0] > key && num[j][0] > k)
					count[i]--;
				
				else if(num[j][0] < key || num[j][1] < k)
				{
					key = num[j][0];
					k = num[j][1];
				}
					
			}
		}
		
		else
		{
			for(j = 0; j < n2; j++)
			{
				if(num[j][1] > key2 && num[j][0] > k)
					count[i]--;
				
				else if(num[j][1] < key2 || num[j][0] < k)
				{
					key2 = num[j][1];
					k = num[j][0];
				}
			}	
		}
		key2 = 0,key = 0,k = 100001;
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d\n",count[i]);
	}
	
	return 0;
}

	
