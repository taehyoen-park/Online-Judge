#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<vector<pair<bool,int>>> ch(15,vector<pair<bool,int>>(15,make_pair(true,0)));
int chess[15][15],count = 0,n;

void range_of_attack(int x,int y,bool c)
{		
	for(int i = 0; x+i < n; i++)
	{
		if(!c)
		{
			ch[x+i][y].first = c;
			ch[x+i][y].second++;
		}
		else
		{
			ch[x+i][y].second--;
			if(ch[x+i][y].second == 0)
				ch[x+i][y].first = c;	
		}
	}

	for(int i = 0; x+i < n && y+i < n; i++)
	{
		if(!c)
		{
			ch[x+i][y+i].first = c;
			ch[x+i][y+i].second++;
		}
		else
		{
			ch[x+i][y+i].second--;
			if(ch[x+i][y+i].second == 0)
				ch[x+i][y+i].first = c;	
		}
	}
	
	for(int i = 0; x+i < n && y-i >= 0; i++)
	{
		if(!c)
		{
			ch[x+i][y-i].first = c;
			ch[x+i][y-i].second++;
		}
		else
		{
			ch[x+i][y-i].second--;
			if(ch[x+i][y-i].second == 0)
				ch[x+i][y-i].first = c;	
		}
	}
}

void solve(int x)
{
	if(x == n)
	{
		count++;
		return;
	}
	for(int i = 0; i < n; i++)
	{
		if(ch[x][i].first)
		{
			range_of_attack(x,i,false);
			solve(x+1);
			range_of_attack(x,i,true);
		}
		else
			continue;
	}

	return;
}
int main()
{
	cin >> n;
	
	solve(0);
	cout << count;
	return 0;
}
