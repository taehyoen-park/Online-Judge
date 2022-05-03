#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> arr;
vector<int> result(9);
vector<bool> ch(9);
int n, m;

void solve(int x)
{
	if(x == m)
	{
		for(int i = 0 ; i < m; i++)
			cout << result[i] << " ";
		cout << endl;
		int index = distance(arr.begin(),find(arr.begin(),arr.end(),result[x-1]));
		ch[index] = false;
	}
	
	for(int i = 0; i < n; i++)
	{
		if(!ch[i])
		{
			ch[i] = true;
			result[x] = arr[i];
			solve(x+1);
		}
	}
	int index = distance(arr.begin(),find(arr.begin(),arr.end(),result[x-1]));
	ch[index] = false;
	return;
}
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		arr.emplace_back(k);
	}

	sort(arr.begin(),arr.end());
	solve(0);
	return 0;
}
