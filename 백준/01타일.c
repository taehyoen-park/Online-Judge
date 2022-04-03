#include<stdio.h>

unsigned long long N;

unsigned long long factorial(unsigned long long n)
{
	if(n == 1)
		return;
	else
		return n * factorial(n-1);
}

unsigned long long c(unsigned long long a,unsigned long long b)
{
	if(b == 1)
		return;
	else
		return a*c(a-1,b-1);
}

unsigned long long A(unsigned long long N,unsigned long long n) //A C b
{  
	return (N - n) / 2 + n;
}

int main()
{
	unsigned long long num,i,count = 0;
	
	scanf("%llu",&N);
	
	if(N % 2 == 0)
	{
		for(i = 0; i <= N;i+=2)
		{
			num = A(N,N-i);
			if(i == 0 || i == N)
				count++;
			else
				count += c(num,i)/factorial(i);
		}
		
	}
	
	else
	{
		for(i = 1; i <= N;i+=2)
		{
			num = A(N,i);
			if(i == N)
				count++;
			else
				count += c(num,i)/factorial(i);
		}
	}
	
	printf("%llu",count); 
	
	
	return 0;
}
