#include<stdio.h>

long long d[1001];

int t(int x)
{
	if(x == 1)return 1;
	if(x == 2)return 2;
	if(d[x] != 0)return d[x];
	return d[x] = (t(x-1)+t(x-2)) % 10007;
}

int main()
{
	int x;
	
	scanf("%d",&x);	
	printf("%d",t(x));
	return 0;	
} 
