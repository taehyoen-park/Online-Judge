#include<iostream>
#include<vector>

using namespace std;

typedef long long int ull;
ull treecut(ull x);
vector<ull> tree;

ull binary_search(ull start,ull end,ull x)
{
	ull middle,result = 0;
	while(start <= end)
	{
		middle = (start+end)/2;
		result = treecut(middle);
		if(result > x) start = middle+1;
		else if(result < x) end = middle-1;
		else return middle;
	}
	ull tem = treecut(middle);
	if(tem < x)
		return middle-1;
	else return middle;
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
	
	ull Max = -1;
	for(ull i = 0; i < n; i++)
	{
		ull k;
		scanf("%lld",&k);
		tree.push_back(k);
		Max = max(Max,k);
	}
	if(m == 1)
	{
		printf("%lld",Max-1);
		return 0;
	}
	if(n == 1)
	{
		printf("%lld",tree[0]- m);
		return 0;
	}
	
	ull result;
	result = binary_search(1,Max,m);
	printf("%lld",result);
	
	return 0;
}
