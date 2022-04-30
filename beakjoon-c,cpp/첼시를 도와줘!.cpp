#include<iostream>
#include<Algorithm>
#include<vector>

using namespace std;

int main()
{
	int n,p;
	vector<pair<int,string>> player;
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> p;
		for(int j = 0; j < p; j++)
		{		
			int price;
			string name;
			cin >> price >> name;
			pair<int,string> p = make_pair(price,name);
			player.emplace_back(p);
		}
		
		int Max = -1;
		string p_name;
		for(vector<pair<int,string>>::iterator iter = player.begin(); iter != player.end();++iter)
		{
			if(Max != max(Max,(*iter).first))
			{
				Max = max(Max,(*iter).first);
				p_name = (*iter).second;
			}
		}
		cout << p_name << endl;
		
		Max = -1;
		player.clear();
	}
	
	return 0;
}
