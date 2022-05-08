#include<iostream>
#include<vector>
#include<queue>
#define start_airport 1
using namespace std;

const int INF = 2000000000;
int limc;
typedef pair<int,int> resource;
typedef pair<int,resource> info;
typedef pair<resource,int> infoQ;
vector<vector<info>> ticket;
vector<resource> dp;
vector<int> Cost;
vector<int> shttime;

void Dijkstra(int arrive)
{
	shttime[start_airport] = 0;
	priority_queue<infoQ> pq;
	pq.push({{0,0},start_airport});
	
	while(!pq.empty())
	{
		int cur = pq.top().second;
		int time = -pq.top().first.first;
		int cost = pq.top().first.second;
		pq.pop();
		
	
		if(shttime[cur] < time || cost > limc)continue;
		for(unsigned int i = 0; i < ticket[cur].size(); i++)
		{
			//int sumcost += cost + ticket[cur][i].second.first;
			int next = ticket[cur][i].first;
			int nextcost = cost + ticket[cur][i].second.first;
			int nexttime = time + ticket[cur][i].second.second;
			if(nexttime < shttime[next]){
				shttime[next] = nexttime;
				Cost[next] = nextcost;
				if(next == arrive && nextcost <= limc)
					dp.push_back({nextcost,nexttime});
				pq.push({{-nexttime,nextcost},next});
			}
			
		}
		
	}
	return;
}

int main()
{
	int t;
	scanf("%d",&t);
	
	for(int i = 0; i < t; i++){
		int start,arrive,cost,time,edge,airport;
		scanf("%d %d %d",&airport,&limc,&edge);
		shttime.assign(airport+2,INF);
		Cost.assign(airport+2,INF);
		ticket.assign(airport+2,vector<info>(0));
		for(int j = 0; j < edge; j++){
			scanf("%d %d %d %d",&start,&arrive,&cost,&time);
			ticket[start].push_back({arrive,{cost,time}});
		}
		Dijkstra(airport);
		int Min;
		if(dp.size() > 0)
		{		
			for(unsigned int j = 0; j < dp.size()-1; j++){
				Min = min(dp[j].second,dp[j+1].second);
			}
			printf("%d\n",Min);
		}
		else
			printf("Poor KCM\n");
		dp.clear();
	}

	return 0;	
}
