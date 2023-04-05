#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<long> A,B;
long t,n,m,result;

void make_prefix(vector<long> &v,long &x)
{
	for(int i = 1; i < x; i++)
	{
		v[i] += v[i - 1];
	}
	
	for(int i = 1; i < x; i++){
		for(int j = i-1; j >= 0; j--)
		{
			v.push_back((v[i] - v[j]));
		}
	}
	
	sort(v.begin(),v.end());
}

int binary_search(int start,int end, long target,vector<long> &v)
{
	int s = start, e = end;
	while(s + 1 < e)
	{
		int mid = (s+e) / 2;
		if(target <= v[mid]) e = mid;
		else s = mid;
	}
	if(v[s] == target) return s;
	else if(v[e] == target) return e;
	else return -1;
}
int main()
{
	cin.tie(NULL);
	
	cin >> t;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		A.push_back(num);	
	}	
	
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		B.push_back(num);	
	}
	
	make_prefix(A,n);
	make_prefix(B,m);

	for(int i = 0; i < A.size(); i++)
	{
		int target = t - A[i];
		int index = binary_search(0,B.size(),target,B);
		if(index == -1) continue;
		int count = upper_bound(B.begin(),B.end(),target) - lower_bound(B.begin(),B.end(),target);
		result += count;	
	}
	
	cout << result;
	return 0;	
}
