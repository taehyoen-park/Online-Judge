#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
vector<long long> city;
vector<long long> cost;

int main()
{
	cin >> n;
	
	for(int i = 0; i < n-1; i++)
	{
		int num;
		cin >> num;
		cost.emplace_back(num);	
	}
	cost.emplace_back(0);
	
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		city.emplace_back(num);	
	}	
	
	long long result = 0, SumCost = 0, MinCity = city[0];
	for(int i = 0; i < n; i++)
	{
		
		if(i == n-1 ) //도착했을 때 
		{
			result += (MinCity*SumCost);
			break;
		} 
		if(MinCity > city[i]) // 기름값이 원래 기름값보다 싼 곳에 도착했을때  
		{
			result += (MinCity*SumCost);
			MinCity = city[i];
			SumCost = cost[i];
		}
			
		else SumCost += cost[i];
	}
	
	cout << result;
	return 0;
}
