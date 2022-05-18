#include<iostream>
#include<queue>
#include<vector>

using namespace std;

typedef pair<int,int> point;
vector<vector<int>> land;
queue<point> q;

int w = 1,h = 1;
int dx[8] = {-1,1,0,0,1,-1,1,-1},dy[8] = {0,0,1,-1,-1,1,1,-1};

void BFS(int x,int y)
{
	q.push({x,y});
	land[x][y] = 0;
	while(!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		
		for(int i = 0;i < 8;i++)
		{
			int py = y + dy[i];
			int px = x + dx[i];
			
			if((py < 0 || py >= w) || (px < 0 || px >= h))
				continue;
			if(!land[px][py])
				continue;
			if(land[px][py])
			{
				land[px][py] = 0;
				q.push({px,py});
			}
		}	
	}
	return; 
}

int main()
{
	while(w != 0 && h != 0)
	{
		scanf("%d %d",&w,&h);
		if(w == 0 && h == 0) return 0;
		land.assign(h+1,vector<int>(w+1,0));
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w;j++){
				int k;
				scanf("%d",&k);
				land[i][j] = k;
			}
		}
	
		
		int count = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(land[i][j]) {
					count++;
					BFS(i,j);
				}
			}
		}
		printf("%d\n",count);
		land.clear();
	}
	
	return 0;
}
