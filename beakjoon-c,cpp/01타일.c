#include<stdio.h>

int dp[1000001];

int d(int n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	if(n == 3)
		return 3;
	if(dp[n]) return dp[n];
	return dp[n] = ((d(n-1)+d(n-2)) % 15746);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d",d(n));
	return 0;
}
