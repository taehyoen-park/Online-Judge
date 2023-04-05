#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,m,t;
	vector<int> pad1,pad2;
	
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			pad1.push_back(num);
		}
		sort(pad1.begin(),pad1.end());
		
		cin >> m;
		for(int i = 0; i < m; i++)
		{
			int num;
			cin >> num;
			pad2.push_back(num);
		}
	
		for(int i = 0; i < m; i++)
		{
			int s = 0,e = n-1;
			while(s + 1 < e)
			{
				int mid = (s+e) / 2;
				if(pad2[i] <= pad1[mid]) e = mid;
				else s = mid;
			}
			if(pad1[e] == pad2[i] || pad1[s] == pad2[i]) cout << "1";
			else cout << "0";
			cout << '\n';
		}
		pad1.clear();
		pad2.clear();
	}



	return 0;	
}
