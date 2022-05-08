#include<iostream>
#include<algorithm>
#include<vector>

using std::vector;
using std::sort;
using std::max;
using std::pair;

typedef pair<int,int> index;
vector<int> home;
int distance(int x);
{
	
}
int binary_search(int start,int end,int c)
{
	int middle;
	while(start <= end)
	{
		middle = (start+end)/2;
		if()
		else
	}
} 
int main()
{
	int n,c;
	scanf("%d %d",&n,&c);
	
	for(int i = 0; i < n; i++)
	{
		int k;
		scanf("%d",&k);
		home.push_back(k);
	}
	sort(home.begin(),home.end());
	
	int Max = -1;
	for(int i = 0; i < home.size()-1; i++)
	{
		int d = home[i+1]-home[i];
		Max = max(Max,d);
	}
	
	int result = binary_search(1,Max,c);
	printf("%d",result);
	return 0;
}
