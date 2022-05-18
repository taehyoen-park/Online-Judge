#include<iostream>
#include<vector>
#include<queue>

using namespace std;
typedef long long ll;
const ll INF = 2000000000;
ll v1,v2,n,e;
vector<vector<pair<ll,ll>>> graph;
vector<ll> shtest_cost;

ll Dijkstra(ll start,ll arrive)
{
	shtest_cost.assign(n+2,INF);
	shtest_cost[start] = 0;
	priority_queue<pair<ll,ll>> pq;
	pq.push({0,start});
	while(!pq.empty())
	{
		ll cur = pq.top().second;
		ll cost = -pq.top().first;
		pq.pop();
		
		if(shtest_cost[cur] < cost)continue;
		for(unsigned int i = 0; i < graph[cur].size(); i++)
		{
			ll next = graph[cur][i].first;
			ll nextcost = cost+graph[cur][i].second;
			if(nextcost < shtest_cost[next])
			{
				shtest_cost[next] = nextcost;
				pq.push({-nextcost,next});
			}
		}
	}
	return shtest_cost[arrive];
}

int main()
{
	scanf("%lld %lld",&n,&e);
	graph.assign(n+1,vector<pair<ll,ll>>(0));
	
	for(ll i = 0; i < e; i++)
	{
		ll v1,v2,cost;
		scanf("%lld %lld %lld",&v1,&v2,&cost);
		graph[v1].push_back({v2,cost});
		graph[v2].push_back({v1,cost});
	}
	scanf("%lld %lld",&v1,&v2);
	ll v12 = Dijkstra(v1,v2);
	long long ans1 = Dijkstra(1,v1) + v12 + Dijkstra(v2,n);
	long long ans2 = Dijkstra(1,v2) + v12 + Dijkstra(v1,n);
	if(ans1 >= INF || INF <= ans2)
	{
		printf("-1");
		return 0;
	}
	ll Min = min(ans1,ans2);
	printf("%lld",Min);
	return 0;
}
