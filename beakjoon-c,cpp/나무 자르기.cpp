#include<iostream>
#include<vector>

using namespace std;

typedef long long int ull;
ull treecut(ull x);
vector<ull> tree;

ull binary_search(ull start,ull end,ull x)
{
	ull middle,result = 0;
	while(start + 1 < end)
	{
		middle = (start+end)/2;
		result = treecut(middle);
		if(result >= x) start = middle;
		else end = middle;
	}
	return start;
}
ull treecut(ull x)
{
	ull sum = 0;
	for(unsigned int i = 0; i < tree.size(); i++)
	{
		if((tree[i] - x) < 0)
			continue;
		sum = sum + (tree[i]-x);
	}
	return sum;
}
int main()
{
	ull n,m;
	scanf("%lld %lld",&n,&m);
	
	for(ull i = 0; i < n; i++)
	{
		ull k;
		scanf("%lld",&k);
		tree.push_back(k);
	}

	ull result;
	result = binary_search(0,1e9,m);
	printf("%lld",result);
	
	return 0;
}
