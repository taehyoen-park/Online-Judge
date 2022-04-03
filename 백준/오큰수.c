#include<stdio.h>

int main()
{
	int arr[100000],arr2[100000];
	int i,n,j;
	
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d",&arr[i]);
		
	for(i = n-1; i >= 0; i--)
	{
		if(i == n-1)
			arr2[i] = -1;
		
		else
		{
			if(arr[i] < arr[i+1])
				arr2[i] = arr[i+1];
			
			else if(arr[i] > arr[i+1] && arr[i] < arr2[i+1])
				arr2[i] = arr2[i+1];
			
			else
			{
				for(j = i+1; j <= n; j++)
				{
					if(arr2[j] > arr[i])
					{
						arr2[i] = arr2[j];
						break;
					}
					else if(arr2[j] == -1)
					{
						arr2[i] = -1;
						break;
					}
						
					else
						continue;
				}
			}
		}	
	}
	
	for(i = 0; i < n; i++)
		printf("%d ",arr2[i]);
	return 0;
} 
