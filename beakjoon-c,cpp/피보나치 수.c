#include<stdio.h>

int n;

unsigned long long Fibonacci(unsigned long long num,unsigned long long num2)
{
	unsigned long long i = 0,j = 1;
	long long count = n;
	num = 0,num2 = 1; 
	
	while(0 <= n)
	{	
		count -= 2;
		
		if(n % 2 == 0 && count == -2)
		{
			if(n == 0)
				return 0;
				
			return i;
		}
		
		else if(n % 2 != 0 && count == -1)
		{
			if(n == 1)
				return 1;
				
			return j;
		}	
		i = num + num2,num = i;
		j = num2 + i,num2 = j;		
	}
}

int main()
{
	const unsigned long long startnum = 0, startnum2 = 1;
	
	scanf("%d",&n);
	
	printf("%llu",Fibonacci(startnum, startnum2));
	
	return 0;
}
