#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<functional>
using namespace std;
priority_queue<int,vector<int>,greater<int>> card;
int n;

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		card.push(num);
	}

	int result = 0;
	for(int i = 0; i < n-1; i++)
	{
		int first = card.top();
		card.pop();
		int second = card.top();
		card.pop();
		result += first+second;
		card.push(first+second);  
	}
	cout << result;
	return 0;	
} 
