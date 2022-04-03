#include<stdio.h>

long long factorial(long long r)
{
	if(r == 0)
		return 1;
	else
		return r * factorial(r-1);
}

double nCr(double n, double r, double k)
{
	if(r == 0)
		return 1;
	else
		return (n / k) * nCr(n-1,r-1,k+1);

}

int main()
{
	double n,r,k = 1,num = 1;
	
	scanf("%lf %lf",&n,&r);
	num = nCr(n,r,k);	
	
	printf("%lf",num);
	return 0;
}
