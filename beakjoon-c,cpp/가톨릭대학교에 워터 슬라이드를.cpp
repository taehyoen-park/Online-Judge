#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#define MAX 100005

using namespace std;
vector<vector<int>> SCC;
vector<int> link[MAX];
bool finish[MAX];
int ID_arr[MAX],id;
int SCCID_arr[MAX];
int indegree[MAX];
bool Check[MAX];
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
			SCCID_arr[t] = SCC.size() + 1;
			if(x == t)break;
		}
		SCC.push_back(scc);
	}
	
	return parent;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0; i < m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		link[x].push_back(y);
	}
	
	for(int i = 1; i <= n; i++)
		if(!finish[i]) DFS(i);
	
	for(int i = 1; i <= n;i++){
		for(int &value : link[i]){
			if(SCCID_arr[i] != SCCID_arr[value] && !Check[SCCID_arr[value]])
			{
				indegree[SCCID_arr[value]]++;
				Check[SCCID_arr[value]] = true;
			}
		}
		fill(Check,Check+MAX,false);
	}
	
	int result = 0;
	for(int i = 0; i < SCC.size(); i++){
		if(indegree[i+1] == 0) result++;
	}
	
	if(result == 0)
		result = 1;
		
	printf("%d",result);
	return 0;
}
