#include<iostream>

using namespace std;

int arr[10];
int n , m;
void solve(int x)
{
	arr[0] = -1;
	if(x == m+1)
	{
		for(int i = 1; i <= m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}
	
	for(int i = 1; i <= n; i++)
	{
		arr[x] = i;
		if(arr[x] > arr[x-1])
		{
			solve(x+1);
		}
		else
			continue;
	}
		
}

int main()
{
	cin >> n >> m;
	solve(1);
	
	return 0;
}
