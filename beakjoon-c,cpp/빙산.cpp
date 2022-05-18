#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
typedef pair<int,int> point;
vector<vector<point>> graph;
vector<vector<bool>> check;
vector<vector<bool>> check2;
queue<point> q;
int dx[4] = {1,-1,0,0},dy[4] = {0,0,1,-1};
int n,m,year;

void BFS(int x,int y)
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
			
			if(0 > px || px >= n || 0 > py || py >= n)
				continue;
			
			if(!check[px][py])
			{
				graph[x][y].second += -1;
				continue;
			}
				
			else
			{
				check[px][py] = false;
				q.push({px,py});
			}
		}
	}
}


int BFS2(int x,int y)
{
	check2[x][y] = false;
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
			
			if(0 > px || px >= n || 0 > py || py >= n) continue;
			if(!check2[px][py]) continue;
			else
			{
				check2[px][py] = false;
				q.push({px,py});
			}
		}
	}
	return 1;
}

void melt_ice()
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int num = graph[i][j].first + graph[i][j].second;
			if(num <= 0)
			{
				check[i][j] = false;
				graph[i][j].second = 0;
				graph[i][j].first = 0;			
			}
			else
			{
				check[i][j] = true;
				graph[i][j].second = 0;
				graph[i][j].first = num;
			}
			check2[i][j] = check[i][j];
		}
	}
}

int count_ice()
{
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(check2[i][j])
				count += BFS2(i,j);
		}
	}
	return count;
}

int main()
{
	scanf("%d %d",&n,&m);
	graph.assign(n+1,vector<point>(n+1,{0,0}));
	check.assign(n+1,vector<bool>(n+1,false));
	check2.assign(n+1,vector<bool>(n+1,false));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&graph[i][j].first);
			check[i][j] = true;
		}
	}
	
	int result = 0;
	while(result < 2)
	{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(check[i][j])
				{
					BFS(i,j);
					year++;
				}
			}
		}
		
		result = count_ice();
		if(result >= 2) break;
		result = 0;
		melt_ice();	
	}	
	
					
	printf("%d",year);
	return 0;
}
