#include<stdio.h>

int main()
{
	
	int n,x,i,j,result;
	int a,b = 1;
	
	scanf("%d",&n);
	x = n/3;
	
	if(n == 9)
	{
		printf("1");
		return 0;
	}
	
	if((x-1) % 2 == 0)
	{
		if(((x-1)/2 - 1) % 3 == 0)
			result = (x-1)/2*3 - 2;
		else
			result = (x-1)/2*3;
	}
		
	else
	{
		if(((x-2)/2 - 2) % 3 == 0)
			result = (x-2)/2*3 - 2;
		else
			result = (x-2)/2*3;
	}

	for(i = x - 3,j = 2; i > j; i-=2, j++){
		for(a = i,b = j; a > b; a--, b++)
			result += 6;
	}
		
	printf("%d",result);
	return 0;
}
