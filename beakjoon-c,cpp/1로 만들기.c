#include<stdio.h>

int dp[100001];


int main()
{
	int n,i;
	dp[1] = 0;
	
	scanf("%d",&n);
	
	for(i = 2; i <= n; i++)
	{
		dp[i] = dp[i-1] + 1;
		if(i % 3 == 0)
			dp[i] = (dp[i/3]+1) < dp[i] ? (dp[i/3]+1) : dp[i];
		if(i % 2 == 0)
			dp[i] = (dp[i/2]+1) < dp[i] ? (dp[i/2]+1) : dp[i];
	}
	
	printf("%d",dp[n]);
	return 0;
}
