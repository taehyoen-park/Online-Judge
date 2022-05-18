#include<iostream>
#include<array>
#include<queue>

using namespace std;
typedef pair<int,int> point;
array<array<int,251>,251> check;
queue<point> q;
int dx[8] = {-1,1,0,0,1,-1,1,-1},dy[8] = {0,0,1,-1,-1,1,1,-1};
int m,n;
int BFS(int x,int y)
{
	check[x][y] = 0;
	q.push({x,y});
	while(!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for(int i = 0; i < 8; i++)
		{
			int px = x + dx[i];
			int py = y + dy[i];
			if(0 > px || px >= m || 0 > py || py >= n)
				continue;
			
			if(!check[px][py])
				continue;
			else
			{
				check[px][py] = 0;
				q.push({px,py});
			}
		}
	}
	return 1;
} 
int main()
{
	scanf("%d %d",&m,&n);	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d",&check[i][j]);
		}
	}
	
	int count = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(check[i][j])
				count += BFS(i,j);
		}
	}
	printf("%d",count);
	return 0;
}
