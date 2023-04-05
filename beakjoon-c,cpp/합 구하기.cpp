#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	int n,m;
	vector<int> arr;	
	cin >> n;
	
	arr.push_back(0);
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
	
	for(int i = 1; i <= n; i++)
	{
		arr[i] += arr[i-1];
	}
	
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int a,b;
		cin >> a >> b;
		cout << arr[b] - arr[a-1] << '\n';	
	}
	
	
	return 0;
}
