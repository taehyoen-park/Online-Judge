#include<stdio.h>

int main()
{
	int n,m,l,k = 1,count = 0;
	scanf("%d %d %d",&n,&m,&l);
	
	
	if(m == 1)
	{
		printf("0");
		return 0;
	}
	
	for(count = 1; k != n+1 ; count++)
	{
		k += l;
		if(k > n)
			k-=n;
		if(k == 1)
			break;
	}
	
	printf("%d",count*(m-1));
	return 0;
} 
