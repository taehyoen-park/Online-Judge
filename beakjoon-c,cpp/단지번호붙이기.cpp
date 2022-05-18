#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<int,int> point;
vector<vector<int>> check;
vector<int> home;
queue<point> q;
int dx[4] = {1,-1,0,0},dy[4] = {0,0,1,-1};
int n;

int BFS(int x,int y)
{
	check[x][y] = 0;
	q.push({x,y});
	int count = 0;
	while(!q.empty())
	{
	
		x = q.front().first;
		y = q.front().second;
		q.pop();
		count += 1;
		for(int i = 0; i < 4; i++)
		{
			int px = x + dx[i];
			int py = y + dy[i];
			
			if(0 > px || px >= n || 0 > py || py >= n)
				continue;
			
			if(check[px][py] == 0)
				continue;
			else
			{
				check[px][py] = 0;
				q.push({px,py});
			}
		}
	}
	
	home.push_back(count);
	return 1;
}

int main()
{
	scanf("%d",&n);
	check.assign(n+1,vector<int>(n+1,0));
	for(int i = 0; i < n; i++){
		char k[27];
		scanf("%s",&k);
		for(int j = 0; j < n; j++)
			check[i][j] = k[j] - '0';
	}

	int result = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(check[i][j] == 1)
				result += BFS(i,j);
		}
	}
	
	printf("%d\n",result);
	sort(home.begin(),home.end());
	for(unsigned int i = 0; i < home.size(); i++){
		printf("%d\n",home[i]);
	}
	
	return 0;
}
