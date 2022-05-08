#include<iostream>
#include<vector>

using namespace std;
vector<int> stl;
int n,m;

bool Light_On(int x)
{
	if(stl[0] - x > 0)
		return false;
		
	for(unsigned int i = 0; i < stl.size()-1;i++)
	{
		int L = stl[i] + x, R = stl[i+1] - x;
		if(R - L > 0)
			return false;
		else
			continue;
	}
	if(stl[m-1] + x >= n)
		return true;
	else return false;
}

int binary_search(int start,int end)
{
	int middle;
	while(start <= end)
	{
		middle = (start+end)/2;
		if(!Light_On(middle)) start = middle+1;
		else end = middle-1;
	}
	if(!Light_On(middle))
		return middle+1;
	else return middle;
}

int main()
{
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(int i = 0; i < m; i++)
	{
		int k;
		scanf("%d",&k);
		stl.push_back(k);
	}
	if(n == m)
	{
		printf("1\n");
		return 0;
	}
	int result = binary_search(1,n);
	printf("%d",result);
	
	return 0;
}
