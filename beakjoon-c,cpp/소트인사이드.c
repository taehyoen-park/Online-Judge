#include<stdio.h>

int main()
{
	int n,i,j,count,temp;
	int arr[10];
	
	scanf("%d",&n);
	
	for(i = 0; n != 0; i++)
	{
		arr[i] = n % 10;
		n = n / 10;
	}
	
	count = i;
	for(i = 0; i < count; i++)
	{
		for(j = i; j < count; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(i = 0; i < count; i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
} 
