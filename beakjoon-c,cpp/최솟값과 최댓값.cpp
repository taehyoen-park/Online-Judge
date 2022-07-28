#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;

const ll Max = -1;
const ll Min = 20000000000;
vector<ll> segmenttree_max;
vector<ll> segmenttree_min;
vector<ll> arr;

ll make_segmenttree(int node,ll start, ll end,bool c)
{
	if((start == end) && c) return segmenttree_max[node] = arr[start];
	if((start == end) && !c) return segmenttree_min[node] = arr[start];
	
	ll mid = (start + end) / 2;
	ll lc = make_segmenttree(node * 2,start,mid,c);
	ll rc = make_segmenttree(node * 2 + 1,mid+1,end,c);
	if(c) return segmenttree_max[node] = (lc > rc) ? lc : rc;
	else return segmenttree_min[node] = (lc < rc) ? lc : rc;
}

ll query(ll node,ll start,ll end,ll left,ll right,bool c)
{
	if((start > right || end < left) && c) return Max;
	if((start > right || end < left) && !c) return Min;
	if((start >= left && end <= right) && c) return segmenttree_max[node];
	if((start >= left && end <= right) && !c) return segmenttree_min[node];
	ll mid = (start + end) / 2;
	ll lr = query(node * 2,start,mid,left,right,c);
	ll rr = query(node * 2 + 1,mid+1,end,left,right,c);
	if(c) return (lr > rr) ? lr : rr;
	else return (lr < rr) ? lr : rr;
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
	segmenttree_max.resize(tree_size);
	segmenttree_min.resize(tree_size);
	
	make_segmenttree(1,0,n-1,0);
	make_segmenttree(1,0,n-1,1);		
	for(int i = 0; i < m; i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		
		ll MAX = query(1,0,n-1,a-1,b-1, 1);
		ll MIN = query(1,0,n-1,a-1,b-1, 0);
		
		printf("%d %d\n",MIN,MAX);
	}
	
	return 0;
}
