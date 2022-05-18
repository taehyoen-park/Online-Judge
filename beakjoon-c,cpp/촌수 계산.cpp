#include<iostream>
#include<vector>

using namespace std;

vector<bool> check;
vector<int> d;
vector<vector<int>> ret;
int a,b;

void DFS(int x,int depth)
{
	check[x] = true;
	d[x] = depth;
	for(int i = 0; i < ret[x].size();i++)
	{
		if(!check[ret[x][i]])
			DFS(ret[x][i],depth+1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);	
	scanf("%d %d",&a,&b);
	
	int m;
	scanf("%d",&m);
	d.assign(n+1,0);
	ret.assign(n+1,vector<int>(0));
	check.assign(n+1,0);
	
	for(int i = 0; i < m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		parent[y] = x;
		ret[x].push_back(y);	
		ret[y].push_back(x);	
	}
	
	DFS(a,0);
	int a_d = d[b];
	check.assign(n+1,0);
	DFS(b,0);
	int b_d = d[a];
	
	if(b_d == a_d && b_d != 0)
		printf("%d",b_d);
	else printf("-1");

	return 0;
} 
