#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> parent;
vector<bool> ch;
vector<int> result;
void DFS(int start)
{
	ch[start] = true;
	for(unsigned int i = 0; i < parent[start].size(); i++)
	{
		if(!ch[parent[start][i]]){
			result[parent[start][i]] = start;
			DFS(parent[start][i]);
		}
			
		else{
			result[start] = parent[start][i];
			continue;
		} 
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	
	parent.assign(n+2,vector<int>(0));
	ch.assign(n+2,false);
	result.assign(n+2,false);
	
	for(int i = 0; i < n-1; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		parent[y].push_back(x);
		parent[x].push_back(y);			
	}	
	DFS(1);
	
	for(int i = 2; i <= n; i++)
		printf("%d\n",result[i]);
		
	return 0;
}
