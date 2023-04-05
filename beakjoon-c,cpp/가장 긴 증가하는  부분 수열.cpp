#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> arr;
int dp[1001]; // 0번째는 최종숫자 1번째는 카운트 
int n,c;

int main()
{
	cin.tie(NULL);
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
	
	for(int i = 0; i < n; i++)
	{
		dp[i] = 1;
	}
	
	for(int i = 1; i < n; i++)
	{
		for(int j = i-1; j >= 0; j--)
		{
			if(arr[i] > arr[j] && dp[i] <= dp[j])
			{
				dp[i] = (dp[j]+1);			
			}	
		}
	}
	

	int Max = -1;
	for(int i = 0; i < n; i++)
	{
		if(dp[i] > Max)
		{
			Max = dp[i];
		}
	}

	cout << Max;
	return 0;	
}
