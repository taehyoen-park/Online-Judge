#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<long> arr_ab;
vector<long> arr_cd;
vector<long> a,b,c,d;
int n;
long num;

bool Is_zero(long a,long b)
{
	if((a+b) == 0) return true;
	else return false;
}

int binary_search(int start,int end,long target)
{
	int s = start, e = end;
	long x = -target;
	while(s + 1 < e)
	{
		int mid = (s+e) / 2;
		if(x < arr_cd[mid] ) e = mid;
		else s = mid;
	}
	if(Is_zero(arr_cd[e],target)) return e; // index 
	else if (Is_zero(arr_cd[s],target)) return s;
	else return -1;
	
	return 0;
}

int main()
{
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		long A,B,C,D;
		cin >> A >> B >> C >> D;
		a.push_back(A);
		b.push_back(B);
		c.push_back(C);
		d.push_back(D);	
	}		
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
		{
			arr_ab.push_back((a[i] + b[j]));
			arr_cd.push_back((c[i] + d[j]));	
		}
	}
	sort(arr_cd.begin(),arr_cd.end());

	for(int i = 0; i < arr_ab.size(); i++)
	{
		int index = binary_search(0,arr_cd.size(),arr_ab[i]);
		if(index != -1){
			num += (upper_bound(arr_cd.begin(),arr_cd.end(),arr_cd[index]) - lower_bound(arr_cd.begin(),arr_cd.end(),arr_cd[index]));
		}
		else continue;	
	}
	
	cout << num;
	
	return 0;	
}
