#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	vector<int> arr(n+2);
	vector<int> result(n+2);
	
	for(int i = 1; i <= n; i++){
		scanf("%d",&arr[i]);	
	}
	
	result[0] = 0;
	for(int i = 1; i <= n; i++){
		result[i] = result[i-1] + arr[i];
	}
	
	for(int i = 0; i < m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		printf("%d\n",result[y]-result[x-1]);	
	}
	
	return 0;
}
