#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<algorithm>

using namespace std;

typedef pair<int,int> point;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,m;
array<array<int,103>,103> map;
	
void BFS(int x,int y)
{
	map[x][y] = 0;
	queue<point> q;
	q.push({x,y});
	while(!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++)
		{
			int px = x + dx[i];
			int py = y + dy[i];
			if(px < 1 || px > n || py < 1 || py > m)
				continue;
			if(map[px][py] == 0)
				continue;
			if(map[px][py] == 1)
			{
				map[px][py] = 0;
				q.push({px,py});
			}
		}
	}
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char str[102];
		scanf("%d %d",&n,&m);
		
		fill(&map[1][1],&map[102][102],0);
		for(int i = 1; i <= n; i++)
		{
			scanf("%s",str);
			for(int j = 0; j < m; j++){
				if(str[j] == '#') map[i][j+1] = 1;
				else map[i][j+1] = 0; 
			}
		}
		
		int count = 0;
		for(int i = 1;i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(map[i][j] == 1){
					BFS(i,j);
					count++;					
				} 
				else continue;
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}
