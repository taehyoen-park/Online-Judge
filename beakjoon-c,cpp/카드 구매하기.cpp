#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n;
vector<int> card;

int main()
{
	cin >> n;
	card.push_back(0);
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		card.push_back(num);	
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(card[i+j] < card[i] + card[j] && i+j <= n)
				card[i+j] = card[i] + card[j];
		}
	}
	
	cout << card[n];
	return 0;
}

