#include<iostream>
#include<vector>

using namespace std; 

bool compare(const pair<pair<int,int>,int> x,const pair<pair<int,int>,int> y)
{
	return (x.first.first > y.first.first);	
}

int main()
{
	int n;
	cin >> n;
	
	vector<pair<int,int>> body;
	vector<int> rank;
	
	for(int i = 0 ; i < n ;i++)
	{
		int weight,height;
		cin >> weight >> height;
		body.emplace_back(make_pair(weight,height));
	}
	
	for(int i = 0;i < n; i++)
	{
		int count = 0;
		for(int j = 0; j < n; j++)
		{
			if(i != j)
			{
				if(body[i].first < body[j].first && body[i].second < body[j].second)
					count++;
			}
			else 
				continue;
		}
		rank.emplace_back(count+1);
	}
	
	for(int i = 0 ; i < n; i++)
	{
		cout << rank[i] << " ";
	}
		
		
	return 0;
}
