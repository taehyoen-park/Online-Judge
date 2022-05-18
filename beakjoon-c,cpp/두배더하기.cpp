#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> B;
	int n;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
	{
		int k;
		scanf("%d",&k);
		B.push_back(k);
	}		
	
	int count = 0;
	bool ch = false,check = false;
	while(1)
	{
		for(int i = 0; i < n; i++)
		{
			if(B[i] != 0) check = true;
			if(B[i] % 2 != 0)
			{
				B[i] -= 1;
				count++;
				ch = true;
				continue;
			}
			else continue;
		}
		if(!check) break;
		if(!ch)
		{
			for(int i = 0; i < n; i++) 
				B[i] = B[i]/2;
			count++;		
		}
		check = false;ch = false;
	}
	
	printf("%d",count);
	return 0;
} 
