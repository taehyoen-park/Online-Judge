#include<stdio.h>

long long dp[101];

long long d(long long n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 1;
	if(n == 3)
		return 1;
	if(dp[n]) return dp[n];
	
	return dp[n] = d(n-2)+d(n-3);
}
int main()
{
	long long t,n,i;
	
	scanf("%lld",&t);
	for(i = 0; i < t; i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",d(n));
	}
	
	return 0;
}
