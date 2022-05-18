#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n,s;
vector<int> con;

int getcount(int len)
{
	int start = con[0],count = 1;
	for(unsigned int i = 0; i < con.size(); i++)
	{
		if(con[i] - start >= len)
		{
			count++;
			start = con[i];
		}
		else continue;
	}
	return count;
}
int binary_search(int start,int end)
{
	int middle,result = 0;
	while(start <= end)
	{
		middle = (start + end) / 2;
		int count = getcount(middle);
		if(count > s){
			start = middle + 1;
			result = middle;
		}
		else if(count < s)
			end = middle - 1;
		else{
			start = middle + 1;
			result = middle;
		}
	}
	return result;
}
int main()
{
	int T;
	scanf("%d",&T);
	for(int i = 0; i < T; i++)
	{
		int Min = 2000000000,result = 0;
		scanf("%d %d",&n,&s);
		for(int j = 0; j < n; j++)
		{
			int k;
			scanf("%d",&k);
			con.push_back(k);	
		}
		
		sort(con.begin(),con.end());
		if(n == s)
		{
			for(unsigned int i = 1; i < con.size(); i++)
				Min = min(Min,con[i]-con[i-1]);
			printf("%d\n",Min);
		}
		else if(s == 2)
			printf("%d\n",con[n-1]-con[0]);
		
		else
		{
			result = binary_search(1,con[n-1]-con[0]);
			printf("%d\n",result);			
		}
		con.clear();
	}
	return 0;	
}
