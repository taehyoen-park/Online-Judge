#include<stdio.h>

unsigned long long C(unsigned long long n,unsigned long long m)
{
	if(m == 0)
		return n;
	else
		return n * C(n-1,m-1);
}

unsigned long long factorial(unsigned long long n)
{
	if(n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int main()
{
	unsigned long long n,m;
	unsigned long long num;
	scanf("%llu %llu",&n,&m);

	
	if(m == 0)
		printf("1");
	
	else
	{
		num = C(n,m-1);
		printf("%llu",num/factorial(m));
	}
		
	
	return 0;
}
