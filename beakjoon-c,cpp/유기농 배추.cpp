#include<iostream>
#include<queue>
#include<vector>

using namespace std;

typedef pair<int,int> point;
vector<vector<bool>> check;
queue<point> q;
int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
int n,m,k,count = 0;

int BFS(int x,int y)
{
	check[x][y] = false;
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
			if((0 > px || px >= n) || (0 > py || py >= m))
				continue;
				
			if(!check[px][py])
				continue;
			
			if(check[px][py])
			{
				check[px][py] = false;
				q.push({px,py});
			}
				
		}
	}
	return 1;
}
int main()
{
	int T;
	scanf("%d",&T);
	
	for(int i = 0; i < T; i++)
	{
		scanf("%d %d %d",&m,&n,&k);
		check.assign(n+2, vector<bool>(m+2,false));
		for(int j = 0; j < k; j++)
		{
			int x,y;
			scanf("%d %d",&y,&x);
			check[x][y] = true;
		}
		
		for(int p = 0; p < n; p++){
			for(int z = 0; z < m; z++)
			{
				if(check[p][z])
					count += BFS(p,z);
				else continue;
			}
		}
		printf("%d\n",count);
		count = 0;
		check.clear();
	}
		
	return 0;
} 
