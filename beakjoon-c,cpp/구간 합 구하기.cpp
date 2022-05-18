#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
typedef long long ll;

vector<ll> arr;
vector<ll> segmentTree;

ll Make_segmentTree(ll node_num,ll start,ll end)
{
	if(start == end) return segmentTree[node_num] = arr[start];
	
	ll mid = (start + end) / 2;
	ll left_Child = Make_segmentTree(node_num * 2, start, mid);
	ll right_Child = Make_segmentTree(node_num * 2 + 1,mid + 1, end);
	segmentTree[node_num] = left_Child + right_Child;
	
	return segmentTree[node_num];
}

ll Sum(ll node_num,ll start,ll end,ll left,ll right)
{
	if(start > right || end < left) return 0;
	if(start >= left && end <= right) return segmentTree[node_num];
	
	ll mid = (start + end) / 2;
	ll left_result = Sum(node_num * 2,start,mid,left,right);
	ll right_result = Sum(node_num * 2 + 1,mid + 1,end,left,right);
	return left_result + right_result;
}

void update_segmentTree(ll node_num,ll start,ll end,ll index,ll diff)
{
	if(index < start || index > end) return;
	segmentTree[node_num] = segmentTree[node_num] + diff;
	
	if(start != end)
	{
		ll mid = (start + end) / 2;
		update_segmentTree(node_num * 2,start,mid,index,diff);
		update_segmentTree(node_num * 2 + 1,mid + 1,end,index,diff);
	}	
}

int main()
{
	ll n,m,k;
	scanf("%lld %lld %lld",&n,&m,&k);
	
	arr.resize(n+2);
	for(ll i = 0; i < n; i++)
		scanf("%lld",&arr[i]);
		
	ll tree_Heigh = (ll)ceil(log2(n));
	ll tree_size = (1 << (tree_Heigh+1));
	segmentTree.resize(tree_size);
	Make_segmentTree(1, 0,n - 1);

	for(ll i = 0; i < m+k; i++)
	{
		ll a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		
		if(a == 1)
		{
			ll diff = c - arr[b-1];
			arr[b-1] = c;
			update_segmentTree(1,0,n-1,b-1,diff);
		}
			
		else if(a == 2)
			printf("%lld\n",Sum(1,0,n-1,b-1,c-1));
	}
	
	return 0;
}
