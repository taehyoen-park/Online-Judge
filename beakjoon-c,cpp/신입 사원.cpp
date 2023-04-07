#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<pair<int,int>> p;
vector<int> result;
int n;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		p.assign(n,{0,0});
		
		for(int i = 0; i < n; i++)
			cin >> p[i].first >> p[i].second;
		// ���� ���� ���� 
		sort(p.begin(),p.end());
		
		int result = n,Min;
		// ���ĵ� ��� �������� 1��� 2���� �ٸ� ���ĵ��� ���� �����  
		if(p[0].second < p[1].second) Min = p[0].second;
		else Min = p[1].second;
		
		//���ĵ� ��� �������� 2����� N����� �ݺ� 
		for(int i = 1; i < n; i++)
		{
			//������ ���ĵ� ������� �� ���� ����� ���ĵ��� ���� ��������� �� ���� �� 
			if(p[i].second > p[i-1].second) result--; 
			else{
				// ���ĵ��� ���� ������� �и��� �ʾ����� ���� ����� �� ���� ���� ����� �� 
				if(Min > p[i].second) Min = p[i].second;
				// ���� �и��ٸ� �ο� ���� 
				if(Min < p[i].second) result--;
			}
		}
		
		p.clear();
		cout << result << '\n';
	}
		
	
	return 0;
}
