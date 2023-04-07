#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;
typedef long long ll;
int n,k;
vector<pair<ll,ll>> j;
vector<ll> bag;

bool compare(pair<ll,ll> a,pair<ll,ll> b)
{
	return a.second > b.second;
}

int CostSearch(ll start, ll end, ll target) {
    static vector<int> costCache;
    if (costCache.empty()) {
        for (int i = 0; i < n; i++) {
            int cost = lower_bound(bag.begin(), bag.end(), j[i].first) - bag.begin();
            costCache.push_back(cost);
        }
    }

    int s = start, e = end;
    while (s + 1 < e) {
        int mid = (s + e) / 2;
        if (target < bag[mid])
            e = mid;
        else
            s = mid;
    }
    if (bag[s] < target)
        return (bag[e] >= target) ? e : -1;
    else
        return s;
}

int main()
{
	cin.tie(NULL);
	
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		ll m,v;
		cin >> m >> v;
		j.emplace_back(m,v);
	}
	sort(j.begin(),j.end(),compare);
	
	//bag.emplace_back(0);
	for(int i = 0; i < k; i++)
	{
		ll num;
		cin >> num;
		bag.emplace_back(num);
	}
	sort(bag.begin(),bag.end());


	ll result = 0,bagIndex = bag.size()-1,bagSize = bag.size();
	for(int i = 0; i < n; i++)
	{
		ll cost = CostSearch(0,bagIndex,j[i].first); 
		if(cost != -1)
		{
			result += j[i].second;
			bag.erase(bag.begin()+cost);
			bagIndex--;
			bagSize--;
			if(bagSize == 0) break;
		}
		
	}
	
	cout << result;
	return 0;
}
