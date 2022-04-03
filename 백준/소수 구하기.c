#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int n,m,j,i,k;
	int *ptr;
	
	scanf("%d %d",&n,&m);
	ptr = malloc(sizeof(int)*(m+1));
	ptr[0] = 0,ptr[1] = 0;
	for(i = 2; i <= m; i++){
		ptr[i] = i;
	}
		
		
	for(i = 2; i <= m; i++)
	{
		if(ptr[i] == 0)
			continue;

		for(j = i+i; j <= m; j += i)
			ptr[j] = 0;
	
	}
	
	k = 0;
	for(i = n; i <= m; i++)
	{
		if(ptr[i] != 0)
		{
			if(k == 0)
				printf("%d",ptr[i]);
			else
				printf("\n%d",ptr[i]);
			k = 1;
		}
		else
			continue;
	}
	
	free(ptr);
	return 0;
}
