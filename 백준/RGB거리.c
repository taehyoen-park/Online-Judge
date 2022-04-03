#include <stdio.h>

int dp[1005][3];

int min(int x,int y)
{
	if(x > y)
		return y;
	else
		return x;
}
int main(){
	int n,i,j;
	int ans;
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
		for(j = 0; j < 3; j++)
			scanf("%d",&dp[i][j]);
	
	for(i = 1; i < n; i++){
		dp[i][0] += min(dp[i-1][1],dp[i-1][2]);
		dp[i][1] += min(dp[i-1][0],dp[i-1][2]);
		dp[i][2] += min(dp[i-1][0],dp[i-1][1]);
	}
	
	ans = min(dp[n-1][0],dp[n-1][1]);
	ans = min(dp[n-1][2],ans);
	
	printf("%d",ans);
	
	return 0;
}
