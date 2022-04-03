#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int compare(const void *x,const void *y)
{
	int a = *(int*)x;
	int b = *(int*)y;
	if(a > b)
		return 1;
	else if(a < b)
		return -1;
	else
		return 0;
}

int main()
{
	int money[101],dp[10001] = { -1 };
	int n,k,j,i;
	

	scanf("%d %d",&n,&k);
	memset(money,0,101);
	for(i = 0; i < n; i++)
		scanf("%d",&money[i]);
	
	qsort(money,n,sizeof(int),compare);
	
	memset(dp,0,1001);
	dp[0] = 1;
	for(i = 0; i < n;i++){
		for(j = 0;j < k;j++)
		{
			if(j+money[i] > k)
				break;
			if(dp[j] >= 1)
				dp[j+money[i]] += dp[j];
			
			else
				continue;
		}
	}
	
	printf("%d",dp[k]);
	return 0;
}
