#include<stdio.h>

//소수 찾기
int main()
{
	int n,j,i,count = 0;
	int num[101];
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
		scanf("%d",num + i);
	
	for(i = 0; i < n; i++)
	{
		if(num[i] == 2)
		{
			count++;
			continue;
		}
		
		for(j = 2; j <= num[i] / 2 + 1; j++)
		{
			if(num[i] % j == 0)
				break;
			else
			{
				if(num[i] % j != 0 && j == num[i] / 2 + 1)
				{
					count++;
					break;
				}
				continue;
			}
				
		}
	}

	printf("%d",count);
	return 0;
}
