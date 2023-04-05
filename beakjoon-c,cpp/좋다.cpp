#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> arr;
int N;

int search(int start, int end,int x)
{
	int s = start,e = end;
	while(s + 1 < e)
	{
		int mid = (s+e)/2;
		if(x < arr[mid]) e = mid;
		else s = mid;
	}
	return s;
}

int main()
{
	int count = 0;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);	
	}
	sort(arr.begin(),arr.end());
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++)
		{
			int num = arr[i] - arr[j]; 
			int result = search(0,N-1,num);
			if((arr[result] + arr[j] == arr[i]) && result != j && i != j && result != i){
				int k = upper_bound(arr.begin(),arr.end(),arr[i]) - lower_bound(arr.begin(),arr.end(),arr[i]); // 중복되는 수의 개수 
				count += k;
				if(k > 1) i = (upper_bound(arr.begin(),arr.end(),arr[i]) - arr.begin()) - 1;
				break;
			}
			
			else 
				continue;	
		
		}
	}
	cout << count;
	return 0;
}
