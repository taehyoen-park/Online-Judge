#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef unsigned long long int ll;
ll n, m;
vector<int> person;

ll getcount(ll time)
{
	ll sum = 0;
	for(unsigned int i = 0; i < person.size(); i++)
	{
		if(time >= person[i])
			sum += time/person[i];
		else continue;
	}
	return sum;
}
ll binary_search(ll start,ll end)
{
	ll middle,result;
	while(start <= end)
	{
		middle = (start + end) / 2;
		ll sum = getcount(middle);
		if(sum < m)
			start = middle + 1;
		
		else if(sum > m)
		{
			end = middle - 1;
			result = middle;
		}
			
		else{
			end = middle - 1;
			result = middle;
		}
	}
	return result;
}
int main()
{
	scanf("%llu %llu",&n,&m);
	
	for(int i = 0; i < n; i++)
	{
		ll k;
		scanf("%llu",&k);
		person.push_back(k);
	}
	sort(person.begin(),person.end());
	
	if(n == 1)
	{
		printf("%llu",person[0]*m);
		return 0;
	}
	ll end = person[n-1]*m;
	ll result = binary_search(1,end);
	printf("%d",result);
	
	return 0;
}
