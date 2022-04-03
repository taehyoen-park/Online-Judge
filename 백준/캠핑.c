#include<stdio.h>

int main()
{
	int l,p,v,result = 0,count = 1;
	scanf("%d %d %d",&l,&p,&v);
	while(l != 0 && p != 0 && v != 0)
	{
		result += l*(v / p);
		if(l >= (v % p))
			result += (v % p);
		else
			result += l;
		printf("Case %d: %d\n",count,result);
		result = 0;count++;
		scanf("%d %d %d",&l,&p,&v);
	}
	
	return 0;
} 
