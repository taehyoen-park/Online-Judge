#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> arr;
int dp[100001];
int n;

int Sum(int x,int y)
{
	int sum = 0;
	for(int i = x; i <= y; i++)
		sum += arr[i];
		
	return sum;
}

void solve(int x,int y)
{
	if(x > y) return;
	if(x >= n || y >= n) return;
	dp[y-x+1] = Sum(x,y);
	solve(x+1,y);
	solve(x,y+1);
}
int main()
{
	int n;
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}	
	
	return 0;
}
