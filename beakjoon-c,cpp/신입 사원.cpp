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
		// 한쪽 기준 정렬 
		sort(p.begin(),p.end());
		
		int result = n,Min;
		// 정렬된 등수 기준으로 1등과 2등의 다른 정렬되지 않은 등수비교  
		if(p[0].second < p[1].second) Min = p[0].second;
		else Min = p[1].second;
		
		//정렬된 등수 기준으로 2등부터 N등까지 반복 
		for(int i = 1; i < n; i++)
		{
			//나보다 정렬된 등수에서 더 높은 사람이 정렬되지 않은 등수에서도 더 높을 때 
			if(p[i].second > p[i-1].second) result--; 
			else{
				// 정렬되지 않은 등수에서 밀리지 않았을때 먼저 등수들 중 가장 높은 등수와 비교 
				if(Min > p[i].second) Min = p[i].second;
				// 내가 밀린다면 인원 감소 
				if(Min < p[i].second) result--;
			}
		}
		
		p.clear();
		cout << result << '\n';
	}
		
	
	return 0;
}
