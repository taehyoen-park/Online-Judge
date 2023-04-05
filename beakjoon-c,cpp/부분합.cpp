#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<long> arr;
long n,s,result = 100000;

int binary_search(int start,int end,long target)
{
	int s = start,e = end;
	while(s + 1 < e)
	{
		int mid = (s+e) / 2;
		if(target >= arr[mid]) s = mid;
		else e = mid;
	}
	return s;
}

int main()
{
	cin >> n >> s;
	
	for(int i = 0; i < n; i++)
	{
		long a;
		cin >> a;
		arr.push_back(a);		
	}
	
	for(int i = 1; i < n; i++)
	{
		arr[i] += arr[i-1];
	}

	int start_index = binary_search(0,n-1,s);
	for(int i = start_index; i < n; i++)
	{
		long target = arr[i] - s;
		if(target < 0) continue;
		int result_index = (upper_bound(arr.begin(),arr.begin() + i ,target) - arr.begin() - 1);
		if(arr[i] - arr[result_index] < s && arr[i] - arr[result_index] > 0) continue;
		if(result > i - result_index)
			result = i - result_index;
	}
	if(result == 100000) cout << "0";
	else cout << result;
	return 0;
}
