#include<iostream>
#include<vector>

using namespace std;
vector<int> v;

int getsum(int x)
{
	int sum = 0;
	for(unsigned int i = 0; i < v.size(); i++)
	{
		if(v[i] >= x) sum += x;
		else sum += v[i];
	}

	return sum;
}

int binary_search(int start,int end,int x)
{
	int middle;
	while(start <= end)
	{
		middle = (start+end) / 2;
		int sum = getsum(middle);
		if(sum < x) start = middle+1;
		else if(sum > x) end = middle-1;
		else return middle;
	}
	if(getsum(middle) > x)
		return middle - 1;
	else return middle;
}


int main()
{
	int n;
	scanf("%d",&n);
	
	int Max = -1,sum = 0;
	v.assign(n+1,0);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&v[i]);
		Max = max(Max,v[i]);
		sum += v[i];
	}
	
	int total_budget,result = 0;
	scanf("%d",&total_budget);
	if(sum <= total_budget)
	{
		printf("%d",Max);
		return 0;
	}
	
	else
		result = binary_search(1,Max,total_budget);
	printf("%d",result);
	
	return 0;
}
