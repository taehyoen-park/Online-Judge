#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int n,j,i,k,result = 0;
	int *ptr;
	
	scanf("%d",&n);
	ptr = malloc(sizeof(int)*10000);
	
	if(n == 1 || n == 2)
	{
		printf("6");
		return 0;
	}
	ptr[0] = 0,ptr[1] = 0;
	for(i = 2; i <= n; i++){
		ptr[i] = i;
	}
		
	for(i = 2; i <= n; i++)
	{
		if(ptr[i] == 0)
			continue;

		for(j = i+i; j <= n; j += i)
			ptr[j] = 0;
	
	}
	
	k = 0;
	for(i = 2; result <= n; i++)
	{
		if(ptr[i] != 0)
		{
			result = k*ptr[i];
			k = ptr[i];
		}
	}
	
	printf("%d",result);
	free(ptr);
	return 0;
}
