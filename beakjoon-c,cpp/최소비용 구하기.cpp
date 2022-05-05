#include<iostream>
#include<vector>
#include<queue>

using namespace std;

const int INF = 1000000000;
int n,b,start,arrive;
vector<vector<pair<int,int>>> graph;
vector<int> shtest_cost;

void Dijkstra()
{
	shtest_cost[start] = 0;
	priority_queue<pair<int,int>> pq;
	pq.push({0,start});
	while(!pq.empty())
	{
		int cur = pq.top().second;
		int cost = -pq.top().first;
		pq.pop();
		
		if(shtest_cost[cur] < cost)continue;
		for(unsigned i = 0; i < graph[cur].size(); i++)
		{
			int next = graph[cur][i].first;
			int nextcost = cost+graph[cur][i].second;
			if(nextcost < shtest_cost[next])
			{
				shtest_cost[next] = nextcost;
				pq.push({-nextcost,next});
			}
		}
	}
//	return;
}
int main()
{
	cin >> n;
	cin >> b;
	shtest_cost.assign(n+2,INF);
	graph.assign(n+1,vector<pair<int,int>>(0));
	
	for(int i = 0; i < b; i++)
	{
		int v1,v2,cost;
		cin >> v1 >> v2 >> cost;
		graph[v1].push_back({v2,cost});
	}
	cin >> start >> arrive;
	
	Dijkstra();
	cout << shtest_cost[arrive];
	return 0;
}
