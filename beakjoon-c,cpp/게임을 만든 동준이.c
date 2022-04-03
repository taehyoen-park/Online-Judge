#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,count = 0,lv[101];
	
	scanf("%d",&n);
	for(i = 0; i < n;++i){
		scanf("%d",&lv[i]);
	}
	
	for(i = n-1; i > 0; --i)
	{
		if(lv[i-1] >= lv[i])
		{
			count += (lv[i-1] - lv[i])+1;
			lv[i-1] -= (lv[i-1] - lv[i])+1;
		}
		else
			continue;
	}
	
	printf("%d",count);
	return 0;
}
