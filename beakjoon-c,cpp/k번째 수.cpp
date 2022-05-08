#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
	ull n , k;
	scanf("%llu",&n);
	scanf("%llu",&k);
	ull count = 0,result;
	double ch = -1;
	priority_queue<ull>pq;
	for(ull i = 1; i <= n; i++){
		for(ull j = i; j <= n; j++)
		{
			if(ch == (double)i) {ch = -1;continue;}
			if(j == i) count++;
			else if((double)(i+1) == (double)sqrt(j)) count+=3,ch = sqrt(j);
			else count += 2;
			
			if(count >= k)
			{
				result = i*j;
				break;
			}	
		}
		if(count >= k)
			break;
	}
	printf("%llu\n",result);
	return 0;
}
