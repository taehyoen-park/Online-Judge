#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int v,e;
vector<vector<int>> computer;
bool check[102];
bool power = false;

int DFS(int x)
{
	if(x == 1) power = true;
	check[x] = true;	
	int count = 1;
	for(unsigned int i = 0; i < computer[x].size(); i++){
		if(!check[computer[x][i]])
			count = count + DFS(computer[x][i]);
	}
	if(power)
		return count;
	else return 0;
}

int main()
{
	
	scanf("%d",&v);
	scanf("%d",&e);
	
	computer.assign(v+1,vector<int>(0));
	for(int i = 0; i < e; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		computer[x].push_back(y);
		computer[y].push_back(x);
	}
	
	int result = 0,Max = -1;
	for(int i = 1; i <= v; i++)
	{
		result = DFS(i);
		Max = max(result,Max);
		power = false;
		fill(check,check+v+1,0);
	}
	
	printf("%d",Max-1);
	
	return 0;
}
