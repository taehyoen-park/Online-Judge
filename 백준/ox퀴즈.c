#include<stdio.h>

int main()
{
	int n,i,j;
	int num = 0,k = 1;
	char arr[81];
	
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%s",arr);
		
		for(j = 0;;j++)
		{	
			if(arr[j] == 'O' && arr[j] != '\0')
			{
				if(arr[j - 1]  == 'O' && j >= 1)
				{
					k++;
					num += k;	
				}
				else
				{
					num++;
				}
			}
			
			else if(arr[j] == 'X')
			{
				k = 1;
				continue;
			}
			
			else
			{
				k = 1;
				break;
			}
		}	
		printf("%d\n",num);
		num = 0;
	}
	
	return 0;
}
