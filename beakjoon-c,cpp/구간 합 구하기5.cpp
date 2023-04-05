#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n,m;
vector<vector<int>> arr;

void make_prefixsum()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 2; j <= n; j++)
		{
			arr[i][j] += arr[i][j-1]; 
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 2; j <= n; j++)
		{
			arr[j][i] += arr[j-1][i]; 
		}
	}
}

int main()
{
	cin.tie(NULL);
	
	cin >> n >> m;

	arr.assign(n+2,vector<int>(n+2,0));
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			int x;
			cin >> x;
			arr[i][j] = x;
		}	
	}

	make_prefixsum();
	for(int i = 0; i < m; i++)
	{
		int x,y,x2,y2;
		cin >> x >> y >> x2 >> y2;

		// (ÃÖ´ë ÁÂÇ¥) - {(ÃÖ´ëxÁÂÇ¥ , ÃÖ¼ÒyÁÂÇ¥ - 1)+(ÃÖ¼ÒxÁÂÇ¥ - 1 , ÃÖ´ëyÁÂÇ¥)} + (ÃÖ¼Òx - 1,ÃÖ¼Òy - 1) 
		if(x > x2){
			if(y < y2) swap(y,y2);
			cout << arr[x][y] - (arr[x][y2-1] + arr[x2-1][y]) + arr[x2-1][y2-1] << '\n';
			
		}
				
		else{
			if(y > y2) swap(y,y2);
			cout << arr[x2][y2] - (arr[x2][y-1] + arr[x-1][y2]) + arr[x-1][y-1]<< '\n';
		}
	}
	
	
	return 0;
}
