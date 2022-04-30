#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	
	vector<int> card;
	for(int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		card.emplace_back(k);
	}
	
	int sum = 0,Max = -1;
	for(int i = n-1; i > 0;i--)
	{	
		sum = card[i];
		if(sum > m)
			continue;
		for(int j = i - 1; j >= 0; j--)
		{
			sum += card[j];
			if(sum > m)
			{
				sum = card[i];				
				continue;
			}
			for(int k = j - 1; k >= 0; k--)
			{
				if((sum+card[k]) <= m && Max <= (sum+card[k]))
					Max = sum+card[k];
			}
			sum = card[i];
		}
	}
	cout << Max;
	return 0;
} 
