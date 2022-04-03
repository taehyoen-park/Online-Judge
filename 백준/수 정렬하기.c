#include<stdio.h>
#define count 1001

int main()
{
	int i,j,n,temp;
	int arr[count];

	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",arr + i);		
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
