#include<iostream>
#define MAX 505

using namespace std;
int parent[MAX];
int getParent(int parent[],int x)
{
	if(parent[x] == x)return x;
	else return parent[x] = getParent(parent,parent[x]);
}

void unionParent(int parent[],int a,int b)
{
	int x = getParent(parent,a);
	int y = getParent(parent,b);
	if(x < y) parent[y] = x;
	else parent[x] = y;
}

bool getunion(int parent[],int a,int b)
{
	int x = getParent(parent,a);
	int y = getParent(parent,b);
	if(x == y) return true;
	else return false;
}

int main()
{
	int n, m, T = 1;
	cin >> n >> m;
	while(n != 0 || m != 0)
	{
		int count = n;
		for(int i = 1; i <= n; i++)
			parent[i] = i;
			
		for(int i = 0; i < m; i++)
		{
			int a,b;
			cin >> a >> b;
			if(getunion(parent,a,b))
			{
				unionParent(parent,a,b);
				parent[getParent(parent,a)] = 0;
			}
			else unionParent(parent,a,b);	
			
		}
		
		for(int i = 1; i <= n; i++)
		{
			if(parent[i] == i)
				continue;
			else count--;				
		}
		
		if(count <= 0)
			printf("Case %d: No trees.\n",T);
		else if(count == 1)
			printf("Case %d: There is one tree.\n",T);
		else
			printf("Case %d: A forest of %d trees.\n",T,count);
		T += 1;
		cin >> n >> m;
	}

	return 0;
}
