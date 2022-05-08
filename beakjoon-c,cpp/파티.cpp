#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

const int INF = 2000000000;
vector<vector<pair<int,int>>> arr;
vector<int> shtcost;
int n,m,x;;

int Dijkstra(int start, int arrive)
{
	priority_queue<pair<int,int>> pq;
	pq.push({0,start});
	shtcost.assign(n+2,INF);
	while(!pq.empty())
	{
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		
		if(shtcost[cur] < cost)continue;
		for(unsigned int i = 0; i < arr[cur].size(); i++)
		{
			int next = arr[cur][i].first;
			int nextcost = cost + arr[cur][i].second;
			if(nextcost < shtcost[next])
			{
				shtcost[next] = nextcost;
				pq.push({-nextcost,next});
			}
		}
	}
	int result = shtcost[arrive];
	return result; 
}

int main()
{
	scanf("%d %d %d",&n,&m,&x);
	arr.assign(n+2,vector<pair<int,int>>(0));
	for(int i = 0; i < m; i++){
		int start,arrive,cost;
		scanf("%d %d %d",&start,&arrive,&cost);
		arr[start].push_back({arrive,cost});	
	}
	
	int result = 0,Max = -1;
	for(int i = 1; i <= n; i++)
	{
		if(i == x)
			continue;
		else
		{
			result = Dijkstra(i,x) + Dijkstra(x,i);
			Max = max(result,Max);
		}	
	}

	printf("%d",Max);
}
