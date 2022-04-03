#include<stdio.h>

int main()
{
	int arr[10001],n,m,i,j,sum = 0,count = 0;
	
	scanf("%d %d",&n,&m);
	for(i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	
	for(i = 0; i < n; i++){
		sum += arr[i];
		if(sum == m)
		{
			count++;
			sum = 0;
			continue;
		}
		else
		{
			for(j = i+1; sum != m;j++)
			{
				sum += arr[j];
				if(sum == m)
				{
					count++;
					sum = 0;
					break;
				}
				else if(sum > m)
				{
					sum = 0;
					break;
				}
				else
					continue;
			}
		}
	}
	printf("%d",count);
	return 0;
}
