#include<iostream>
#include<vector>

using namespace std;

int arr[8];
int n,m;

void solve(int x)
{
	for(int i = 1; i <= n;i++)
	{
		if(x == m-1)
		{
			arr[x] = i;
			for(int i = 0; i < m;i++)
				cout << arr[i] << ' ';
			cout << "\n";
		}
			
		else
		{
			arr[x] = i;
			solve(x+1);
		}
	}
	return;
}
int main()
{
	cin >> n >> m;
	solve(0);
	
	return 0;
}
