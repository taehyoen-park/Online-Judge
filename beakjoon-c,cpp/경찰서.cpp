#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#define MAX 200

using namespace std;

vector<vector<int>> SCC;
vector<vector<int>> node;
int ID_arr[MAX],ID;
long long cost[MAX];
bool finish[MAX];
stack<int> s;

int DFS(int x)
{
	ID_arr[x] = ++ID;
	s.push(x);
	int arrive = ID_arr[x];
	for(int i = 0; i < node[x].size(); i++)
	{
		int index = node[x][i];
		if(ID_arr[index] == 0) arrive = min(arrive,DFS(index));
		else if(!finish[index]) arrive = min(arrive,ID_arr[index]);
	}
	
	if(arrive == ID_arr[x])
	{
		vector<int> scc;
		while(1)
		{
			int t = s.top();
			s.pop();
			finish[t] = true;
			scc.push_back(t);
			if(x == t) break;
		}
		SCC.push_back(scc);
	}
	
	return arrive;
}
int main()
{
	int n;
	scanf("%d",&n);
	char str[MAX];
	
	node.assign(n+2,vector<int>(0));
	for(int i = 1; i <= n; i++)
		scanf("%lld",cost+i);
		
	for(int i = 1; i <= n; i++)
	{
		scanf("%s",str);
		for(int j = 0; j < n; j++){
			if(str[j] == '1')
				node[i].push_back(j+1);
		}
	}
	
	for(int i = 1; i <= n; i++){
		if(!finish[i]) DFS(i);
	}
	
	long long result,sum = 0;
	for(int i = 0; i < SCC.size(); i++)
	{
		result = 1000000000;
		for(int j = 0; j < SCC[i].size(); j++){
			result = min(result,cost[SCC[i][j]]);
		}
		sum += result;
	}
	printf("%lld",sum);
	return 0;
}
