#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	
	int n;
	scanf("%d",&n);
	vector<int> crane(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&crane[i]);
	
	int m;
	scanf("%d",&m);
	vector<int> box(m);
	for(int i = 0; i < m; i++)
		scanf("%d",&box[i]);
	
	sort(crane.begin(),crane.end());
	sort(box.begin(),box.end());
	
	if(crane[n-1] < box[m-1])
	{
		printf("-1");
		return 0;
	}
	
	else
	{
		if(n < m)
		{
			int result = m / n;
			if(m % n > 0) result++;
			printf("%d",result);
		}
		else
		{
			int p = 0,result = 0;
			for(int i = 0; i < n; i++){
				if(crane[i] >= box[0]){
					p = i;
					break;
				}
			}
			result = m / (n-p);
			if(m % (n-p) > 0) result++;
			printf("%d",result);
		}

	}
	return 0;
} 
