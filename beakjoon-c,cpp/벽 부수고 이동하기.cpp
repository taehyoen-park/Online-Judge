#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
int n, m, result;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

//미로를 그대로 담은 변수 
vector<vector<bool>> maze;

// {벽을 부수지 않은 경우의 방문체크,벽을 부순 경우의 방문체크} 
vector<vector<pair<bool,bool>>> check;

// 좌표 {x,y},{답,벽 부수기 기술} 
queue<pair<pair<int, int>, pair<int, bool>>> q;

int bfs(int x, int y)
{
	q.push({ {x,y},{1,true} });
	check[x][y] = { true, false};

	while (!q.empty())
	{
		int a = q.front().first.first; // x좌표 
		int b = q.front().first.second; // y좌표 
		int c = q.front().second.second; // 벽 부수기 기술 유무 
		int ans = q.front().second.first; // 답 
		q.pop();
		
		if (a == (n - 1) && b == (m - 1)) return ans;
		
		for (int i = 0; i < 4; i++)
		{
			int px = a + dx[i];
			int py = b + dy[i];
	
			if ((px < 0 || px > (n - 1)) || (py < 0 || py > (m - 1))) continue; // 범위 벗어났을 때 

			if (maze[px][py] && c && !check[px][py].second)
			{
				q.push({{px,py},{ans + 1,false}});
				check[px][py].first = true;
				check[px][py].second = true;
				continue;
			}
			
			if ((c && check[px][py].first) || (!c && check[px][py].first))continue;
			
			if(((c == false) && check[px][py].second)) continue;
			 						
			//벽을 한 번도 부수지 않은 경우의 방문체크 
			if (c) check[px][py].first = true;
			
			q.push({{px,py},{ans + 1,c}});
			check[px][py].second = true;
		}
	}

	return -1;
}

int main()
{
	cin >> n >> m;

	maze.assign(n, vector<bool>(m, false));
	check.assign(n, vector<pair<bool, bool>>(m, { false, false}));
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		for (int j = 0; j < m; j++)
		{
			bool t = bool(a[j] - 48);
			maze[i][j] = t;
			check[i][j] = { t,false };
		}
	}

	result = bfs(0, 0);

	cout << result << "\n";
	return 0;
}

