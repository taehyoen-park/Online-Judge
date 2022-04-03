#include<stdio.h>

int main()
{
	int i,g,n,num2 = 0;
	int num[50000] = { 0 };
	int result[25000] = { -1 };
	scanf("%d",&g);
	
	for(i = 1,n = 0; i <= g; i++)
	{
		if(g % i == 0)
		{
			num[n++] = i;
		}
	}
	
	for(i = 0; num[i] != 0; i++)
	{
		num2++;
	}
	
	for(i = 0,n = 0; i < num2 / 2; i++)
	{
		if((num[i] + num[num2 - 1 - i]) % 2 == 0)
		{
			result[n++] = (num[i] + num[num2 - 1 - i]) / 2;
		}
		else
			continue;
	}
	
	if(result[0] == -1)
		printf("-1");
	else
	{
		for(i = num2 / 2 - 1; i >= 0; i--)
		{
			if(result[i] == 0)
				continue;
			else
				printf("%d\n",result[i]);
			
		}
	}
	return 0;	
} 
