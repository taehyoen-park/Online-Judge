#include<iostream>
#include<vector>
#include<queue>
/*
5 6
1
5 1 1
1 2 2
1 3 3
2 3 4
2 4 5
3 4 6
*/
using namespace std;

const int INF = 1000000000;
int v,e;
vector<vector<pair<int,int>>> graph;
vector<int> shtest_route;

void Dijkstra(int start)
{
	shtest_route[start] = 0;
	priority_queue<pair<int,int>> pq;
	pq.push(make_pair(0,start));
	
	while(!pq.empty())
	{
		int cur = pq.top().second;
		int cost = -pq.top().first;
		pq.pop();
		
		if(shtest_route[cur] < cost)continue;
		for(unsigned int i = 0; i < graph[cur].size(); i++)
		{
			int next = graph[cur][i].first;
			int nextcost = cost + graph[cur][i].second;
			if(nextcost < shtest_route[next]){
				shtest_route[next] = nextcost;
				pq.push(make_pair(-nextcost,next));
			}	
		}
	}
	return;
}

int main()
{
	cin >> v >> e;
	shtest_route.assign(v+2,INF);
	
	graph.assign(v+1,vector<pair<int,int>>(0));
	int start_v;
	cin >> start_v;
	
	for(int i = 1; i < e+1;i++)
	{	
		int v1,v2,cost;
		cin >> v1 >> v2 >> cost;
		graph[v1].push_back(make_pair(v2,cost));
	}
	
	Dijkstra(start_v);
	for(int i = 1; i < v+1; i++)
	{
		if(shtest_route[i] == INF)
			cout << "INF\n";
		else 
			cout << shtest_route[i] << "\n";
	}
	
	
	return 0;
}
