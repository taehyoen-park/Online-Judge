#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#define MAX 5002

using namespace std;
vector<vector<int>> SCC;
vector<int> link[MAX];
bool finish[MAX];
int ID_arr[MAX],id;
stack<int> s;
int DFS(int x)
{
	ID_arr[x] = ++id;
	s.push(x);
	int parent = ID_arr[x];
	for(int i = 0; i < link[x].size();i++)
	{
		int index = link[x][i];
		if(ID_arr[index] == 0) parent = min(parent,DFS(index));
		else if(!finish[index]) parent = min(parent,ID_arr[index]);
	}
	
	if(parent == ID_arr[x])
	{
		vector<int> scc;
		while(1)
		{
			int t = s.top();
			s.pop();
			scc.push_back(t);
			finish[t] = true;
			if(x == t) break;
		}
		SCC.push_back(scc);
	}
	return parent;
}
int main()
{
	int d,l;
	
	scanf("%d",&d);
	scanf("%d",&l);
	
	for(int i = 0; i < l; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		link[x].push_back(y);
	}
	
	for(int i = 1; i <= d; i++)
		if(!finish[i]) DFS(i);
	
	int Max = -2;
	for(int i = 0; i < SCC.size(); i++){
		Max = max(Max,(int)SCC[i].size());
	}
	printf("%d",Max);
	return 0;
}
