#include<iostream>

typedef unsigned long long int ull;
using namespace std;

ull T,n;
ull binary_search(ull start,ull end)
{
	ull middle;
	while(start <= end)
	{
		middle = (start+end)/2;
		if(middle*(middle+1)/2 < n)
			start = middle+1;
		else if(middle*(middle+1)/2 > n)
			end = middle-1;
		else return middle;
	}
	if(middle*(middle+1)/2 < n)
		return middle;
	else return middle-1;
}
int main()
{
	scanf("%llu",&T);	
	for(ull i = 0; i < T; i++){
		scanf("%llu",&n);
		if(n == 1){printf("1\n");continue;}
		else printf("%llu\n",binary_search(1,n));
	}	
	return 0;
}
