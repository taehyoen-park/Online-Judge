#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> wine;
int drink1[10001];
int drink2[10001];
int n;

int compare(int a,int b)
{
	if(a > b) return a;
	else return b;
}
int main()
{
	cin.tie(0);
	cin >> n;
	
	wine.push_back(0);
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		wine.push_back(num);
	}
	
	drink2[1] = wine[1];
	drink1[1] = wine[1];
	for(int i = 2; i <= n; i++)
	{
		int Max1 = -1;
		drink1[i] = drink2[i-1] + wine[i];
		for(int j = 2; i-j >= 0; j++)
		{
			int result = compare(drink1[i-j],drink2[i-j]);	
			if(Max1 < result) Max1 = result;
		}
		drink2[i] = Max1 + wine[i];
	}
	

	int Max = -1;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 1; j <= n;j++)
		{
			if(i == 0) {
				if(Max < drink1[j]) Max = drink1[j];
			}
		
			else if(Max < drink2[j]) Max = drink2[j];
		}
	}

	cout << Max;
	return 0;	
}
