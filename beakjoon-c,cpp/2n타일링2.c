#include<stdio.h>

int dp[1001];

int fuc(int n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 3;
	if(dp[n] != 0)return dp[n];
	
	return dp[n] = (fuc(n-1)+fuc(n-2)*2) % 10007;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d",fuc(n));
	return 0;
}
