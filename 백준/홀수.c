#include<stdio.h>

int main()
{
	int num[7],i,min = 1000,sum = 0;
	
	for(i = 0; i < 7; i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i = 0; i < 7; i++)
	{
		if(num[i] % 2 != 0)
		{
			sum += num[i];
			if(num[i] < min)
			{
				min = num[i];
			}
		}
	}
	
	if(sum == 0)
		printf("-1");
	else
	{
		printf("%d\n",sum);
		printf("%d",min);
	} 
	
	
	return 0;
}
