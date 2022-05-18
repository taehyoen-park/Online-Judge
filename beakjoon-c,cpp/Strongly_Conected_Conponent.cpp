#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#define MAX 10002
using namespace std;

int idarr[MAX],id;
bool finish[MAX];
vector<int> node[MAX]; 
vector<vector<int>> SCC;
stack<int> s;

int DFS(int x)
{
	idarr[x] = ++id;
	s.push(x);
	int parent = idarr[x];
	for(unsigned int i = 0; i < node[x].size(); i++)
	{
		int index = node[x][i];
		if(idarr[index] == 0) parent = min(parent,DFS(index));
		else if(!finish[index]) parent = min(parent,idarr[index]);
	}
	
	if(parent == idarr[x])
	{
		vector<int> scc;
		while(1)
		{
			int t = s.top();
			s.pop();
			finish[t] = true;
			scc.push_back(t);
			if(t == x) break;
		}
		SCC.push_back(scc);
	}
	return parent;
}

int main()
{
	int v,e;
	scanf("%d %d",&v,&e);

	for(int i = 0; i < e; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		node[x].push_back(y);
	}
	int temp;
	for(int i = 1; i <= v; i++){
		if(idarr[i] == 0)temp = DFS(i);
	}
	
	
	for(int i = 0; i < SCC.size(); i++){
			sort(SCC[i].begin(),SCC[i].end());
	}
	sort(SCC.begin(),SCC.end());
	printf("%d\n",SCC.size());
	for(int i = 0; i < SCC.size(); i++){
		for(unsigned int j = 0; j < SCC[i].size(); j++){
			printf("%d ",SCC[i][j]);
		}
		printf("-1\n");
	}

	return 0;
}
