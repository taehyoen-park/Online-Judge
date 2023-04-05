#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,m;
	vector<int> card,arr,result;
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		card.push_back(num);
	}
	sort(card.begin(),card.end());
	
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	for(int i = 0; i < m; i++)
	{
		int s = 0,e = n-1;
		while(s + 1 < e)
		{
			int mid = (s+e) / 2;
			if(arr[i] <= card[mid]) e = mid;
			else s = mid;
		}
		if(card[e] == arr[i] || card[s] == arr[i]) cout << "1 ";
		else cout << "0 ";
	}


	return 0;	
}
