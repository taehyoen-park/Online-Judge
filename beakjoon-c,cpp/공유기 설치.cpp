#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int n,c;
vector<int> home;

int binary_search(int start,int end,int c)
{
	int middle,start_v,count,result;
	while(start <= end)
	{
		middle = (start+end)/2;
		start_v = home[0],count = 1;	
		for(int i = 0; i < n; i++)
		{
			if(home[i] - start_v >= middle)
			{
				count++;
				start_v = home[i];
			}
			else continue;
		}
		
		if(count > c){
			start = middle + 1;
			result = middle;
		}

		else if(count < c)
			end = middle - 1;
		else {
			start = middle + 1;
			result = middle;
		}
	}
	return result;
}

int main()
{
	scanf("%d %d",&n,&c);
	for(int i = 0; i < n; i++)
	{
		int k;
		scanf("%d",&k);		
		home.push_back(k);		
	}
	sort(home.begin(),home.end());
	
	if(n == 2)
	{
		printf("%d",home[1] - home[0]);
		return 0;
	}
	
	int result = binary_search(1,home[n-1]-home[0],c);
	printf("%d",result);
	

	return 0;
}
