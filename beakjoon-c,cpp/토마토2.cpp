#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int m,n,h,day,count,result;
typedef pair<pair<int,int>,pair<int,int>> node;
int dx[6] = {0,0,-1,1,0,0},dy[6] = {-1,1,0,0,0,0},dz[6] = {0,0,0,0,1,-1};
int tmt[101][101][101];
bool check[101][101][101];
queue<node> q;

// 0,-1,0  0,1,0  -1,0,0  1,0,0  0,0,1  0,0,-1 

void BFS()
{
	while(!q.empty())
	{
		int x = q.front().second.first;
		int y = q.front().first.second;
		int z = q.front().first.first;
		int Day = q.front().second.second;
		q.pop();
		result = Day;
		for(int i = 0; i < 6; i++)
		{
			int px = x+dx[i];
			int py = y+dy[i];
			int pz = z+dz[i];
			if((0 > px || px >= m) || (0 > py || py >= n) || (0 > pz || pz >= h))
				continue;
				
			if(check[pz][py][px] || tmt[pz][py][px] == -1)
				continue;
				
			if(!check[pz][py][px])
			{
				tmt[pz][py][px] = 1;
				count--;
				check[pz][py][px] = true;
				q.push({{pz,py},{px,Day+1}});
			}
		}
	}
}

int main()
{
	cin >> m >> n >> h;
	for(int k = 0; k < h; k++){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
			{
				cin >> tmt[k][i][j];
				if(tmt[k][i][j] == 1)
				{
					q.push({{k,i},{j,0}});
					check[k][i][j] = true;	
				} 
				else if(tmt[k][i][j] == 0) count++;
			}
		}
	}
	
	if(count == 0)
	{
		cout << "0";
		return 0;
	}
	
	BFS();
	
	if(count > 0) cout << "-1";
	else cout << result;

	return 0;
}
