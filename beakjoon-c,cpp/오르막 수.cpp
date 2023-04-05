#include<iostream>
#include<algorithm>
#include<vector>

typedef unsigned long long ull;
using namespace std;

ull dp[10][1001];
int n;

ull solve(ull x,int index)
{
	if(index < 0 || index >= n) return 0;
	if(x > 9 || x < 0) return 0;
	if(dp[x][index] > 0) return dp[x][index];
	if(index == n-1 && (x < 10 || x >= 0)) return 1 + solve(x+1,index)%10007;
	if(index > 0 && index < n && (x < 10 || x >= 0))
		return dp[x][index] = solve(x+1,index)%10007+solve(x,index+1)%10007;
	
	return dp[x][index] = solve(x,index+1)%10007;
}

int main()
{
	cin >> n;
	
	if(n == 1)
	{
		printf("%d",10);
		return 0;
	}
	
	int sum = 0;
	for(ull i = 0; i <= 9; i++)
	{
		sum += solve(i,0);
		sum %= 10007;
	}
		
	printf("%d",sum%10007);	
	return 0;	
} 
