#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;

const ll INF = 2000000000;
vector<ll> segmenttree;
vector<ll> arr;

ll make_segmenttree(int node,ll start, ll end)
{
	if(start == end) return segmenttree[node] = arr[start];
	
	ll mid = (start + end) / 2;
	ll lc = make_segmenttree(node * 2,start,mid);
	ll rc = make_segmenttree(node * 2 + 1,mid+1,end);
	segmenttree[node] = min(lc,rc);
	return segmenttree[node];
}

ll query(ll node,ll start,ll end,ll left,ll right)
{
	if(start > right || end < left) return INF;
	if(start >= left && end <= right) return segmenttree[node];
	ll mid = (start + end) / 2;
	ll lr = query(node * 2,start,mid,left,right);
	ll rr = query(node * 2 + 1,mid+1,end,left,right);
	return (lr < rr) ? lr : rr;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0; i < n;i++)
	{
		ll k;
		scanf("%lld",&k);
		arr.push_back(k);
	}
	int tree_height = (int)ceil(log2(n));
	int tree_size = (1 << (tree_height+1));
	segmenttree.resize(tree_size);
	make_segmenttree(1,0,n-1);
			
	for(int i = 0; i < m; i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		ll result = query(1,0,n-1,a-1,b-1);
		printf("%d\n",result);
	}
	
	return 0;
}
