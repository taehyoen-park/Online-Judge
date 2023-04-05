#include<iostream>
#include<algorithm>
#include<vector>

typedef unsigned long long ull;
using namespace std;
ull dp[101][101];
int n;

ull solve(int x,int index)
{
	if(index < 0 || index >= n) return 0;
	if(x > 9 || x < 0) return 0;
	if(index == n-1 && x < 10 && x >= 0) return 1;
	if(dp[x][index] > 0) return dp[x][index]%(ull)1e9;
	
	return dp[x][index] = (solve(x-1,index+1) + solve(x+1,index+1));
}

int main()
{
	ull result = 0;
	cin >> n;
	
	for(int i = 1;i <= 9; i++)
	{
		result += solve(i,0);
	}
					
	cout << result%(ull)1e9;
	
	return 0;
}
